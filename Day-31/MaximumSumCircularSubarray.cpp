class Solution {
public:
int kadane(vector<int>& nums){
    int currsum=0;
  int maxSum=INT_MIN;
    for(int i=0;i<nums.size();i++){
      
            if(currsum>= 0)
                currsum += nums[i];
            else
                currsum = nums[i];
            if(currsum > maxSum)
                maxSum = currsum;
    }
    return maxSum;
}
    int maxSubarraySumCircular(vector<int>& nums) {
        int wrapsum;
   int nonwrapsum;
   int totalsum=0;

   nonwrapsum = kadane(nums);
   for(int i=0;i<nums.size();i++){
       totalsum+=nums[i];
       nums[i]=-nums[i];
   }
   
wrapsum = totalsum  - -1*kadane(nums);

        return wrapsum==0?nonwrapsum: max(wrapsum,nonwrapsum);
        
    }
};