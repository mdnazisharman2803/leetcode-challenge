class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>idx(nums.size(),-1);
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(idx[nums[i]]!=-1){
                ans=idx[nums[i]];
            }
                        else{
                            idx[nums[i]]=i;
                        }
        }
                                return nums[ans];
    }
};