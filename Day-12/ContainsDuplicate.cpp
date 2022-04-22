class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int i=0;
        int j=1;
        sort(nums.begin(),nums.end());
        while(j!=nums.size()){
            if(nums[i]!=nums[j]){
               i++;
               j++;
            }
            
           else{
               return true;
           }
        }
         return false;
    }
};