class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& nums, int target, int start){
        int i = start, j = nums.size()-1, sum;
        vector<vector<int>> twoList;
        while(i<j){
            sum = nums[i]+nums[j];
            if(sum == target){
                twoList.push_back({nums[i],nums[j]});
                while(i<j && nums[i] == nums[i+1]){
                    i++;
                }
                while(i<j && nums[j-1] == nums[j]){
                    j--;
                }
                i++;
                j--;
            }
            else if(sum<target){
                i++;
            }else{
                j--;
            }
        }
        return twoList;
    }
    vector<vector<int>> kSum(vector<int>& nums, int k, int target, int start){
        vector<vector<int>> kList;
        if(nums.size() < 4){
            return kList;
        }else if(start >= nums.size()){
            return kList;
        }else if(k==2){
            return twoSum(nums, target, start);
        }else{
            vector<vector<int>> temp;
            for(int i = start; i < nums.size() - k + 1; i++){
                if(i == start || nums[i] != nums[i-1]){
                    temp = kSum(nums, k-1, target - nums[i], i+1);
                    for(auto it : temp){
                        it.insert(it.begin(), nums[i]);
                        kList.push_back(it);
                    }
                }
            }   
        }
        return kList;
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        return kSum(nums, 4, target, 0);
    }
};