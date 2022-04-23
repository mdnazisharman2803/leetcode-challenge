class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int least=0;
        int diff= INT_MAX;
        for(int i=0;i<nums.size();i++){
            int absolute= abs(nums[i]);
            if(absolute<diff){
                least=i;
                diff=absolute;
            }
            else if(absolute==diff && nums[i]>0 &&nums[least]<0){
                least=i;
            }
        }
        
        
        
        return nums[least];
        
    }
};