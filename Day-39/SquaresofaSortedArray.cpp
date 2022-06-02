class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        for(long int i=0;i<nums.size();i++){
           
          int temp = nums[i];
          nums[i] = temp*temp;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};