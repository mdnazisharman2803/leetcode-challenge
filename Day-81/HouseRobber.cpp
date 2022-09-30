public:
    int solve(vector<int>& nums, int lastindex){
        //base case
        if(lastindex==0)return nums[lastindex];
        if(lastindex<0)return 0;
       
        // if we include house to rob then our i will go to i+2 else i+1
        
        int includehouse= solve(nums,lastindex-2)+nums[lastindex];
        int excludehouse=solve(nums,lastindex-1)+0;
        
        return max (includehouse,excludehouse);
        
        }
    
    int solve2(vector<int>& nums, int lastindex,vector<int>& dp){
        //base case
           if(lastindex==0)return nums[lastindex];
        if(lastindex<0)return 0;
       
       
        
        //STEP 3
        if(dp[lastindex]!=-1) return dp[lastindex];
        
        
        
        int includehouse= solve2(nums,lastindex-2,dp)+nums[lastindex];
        int excludehouse=solve2(nums,lastindex-1,dp)+0;
        
        //STEP 2
        dp[lastindex]=max (includehouse,excludehouse);
        return dp[lastindex];
        
        }
    
    int solve3(vector<int>& nums){
         int n = nums.size();
        vector<int> dp(n, 0);
		//the base of recursion
        dp[0] = nums[0];
        int includehouse, excludehouse;
        for(int i = 1; i < n ; i++){
            includehouse = nums[i];
			//for checking the negative index
            if(i > 1)includehouse += dp[i-2];
           excludehouse = 0 + dp[i-1];
            dp[i] = max(includehouse,excludehouse);
        }
		//answer will be stored in the last 
        return dp[n-1];
        
        }
    
    int rob(vector<int>& nums) {
      int n=nums.size();
        
        // RECURSION..TLE
     /*    int ans= solve(nums,n-1);
       
        
       return ans;*/
        
        // MEMOISATION
        
    // STEP 1
         
    /*   vector<int>dp(n,-1);
        int ans= solve2(nums,n-1,dp);
        
       return ans;  */
        
        // TABULATION
        //STEP 1
     return solve3(nums);
        
        
        }
};