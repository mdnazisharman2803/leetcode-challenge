class Solution {
public:
   int getCount(vector<int>& coins, int amount, int curr, vector<vector<int>>& dp) {
        if (curr >= coins.size() || amount < 0) {
            return INT_MAX - 1;
        }
        
        if (amount == 0) {
            return 0;
        }
        
        if (dp[curr][amount] == -1) {
            int accept = 1 + getCount(coins, amount - coins[curr], curr, dp);
            int reject = getCount(coins, amount, curr + 1, dp);
            dp[curr][amount] = min(accept, reject);
        }
        
        return dp[curr][amount];
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int minAmt = 0;
      
        
        vector <vector<int>> dp(13, vector <int> (10001, -1));
        minAmt = getCount(coins, amount, 0, dp);
        
        if (minAmt == INT_MAX - 1) {
            return -1;
        }
        return minAmt;
        
    }
};