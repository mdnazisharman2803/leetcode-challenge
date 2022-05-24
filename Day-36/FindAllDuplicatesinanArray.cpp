class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       map<int,int> count;
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
          count[nums[i]]++;
       }
       for(auto i:count){
           if(i.second > 1){
             ans.push_back(i.first);
            }
        }
           return ans;
    }
};