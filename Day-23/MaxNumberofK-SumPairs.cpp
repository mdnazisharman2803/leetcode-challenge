class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
     int count=0;
        int s=0;
        int e=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(s<e ){
              if(nums[s]+nums[e]<k){
                  s++;
              }
            else if(nums[s]+nums[e]>k){
                 e--;
              }
            else{
                count++;
                s++;
                e--;
            }
        }
        return count;
        
    }
};