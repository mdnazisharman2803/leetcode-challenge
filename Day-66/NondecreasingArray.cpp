class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
          int length=nums.size();
        int mx=INT_MIN,mn=INT_MAX,n=0,m=0;
        for(int i : nums){
            if(i<mx){
                n++;
            }
            mx=max(mx,i);
        }
        for(int i=length-1;i>=0;i--){
            if(nums[i]>mn){
                m++;
            }
            mn=min(mn,nums[i]);
        }
        return(n<=1 || m<=1);
    }
};