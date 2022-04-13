class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int end =0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[end]){
                 end++;
                nums[end] = nums[i];
            }
        }
        return end+1;
        
    }
};