class Solution {
public:
  
    int firstMissingPositive(vector<int>& nums) {
         int n= nums.size();
        for(int i=0;i<n;i++){
            int child=nums[i];
            if(child>=1&&child<=n){
                int chair=child-1;
                if(nums[chair]!=child){
                    swap(nums[chair],nums[i]);
                    i--;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(i+1!=nums[i]) return i+1;
        }
        
        return n+1;
    }
};