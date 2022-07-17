class Solution {
public:
    int kInversePairs(int n, int k) {
        int mod = 1000000007;
        vector<vector<int>> dp(n, vector<int>(k + 1, 0));
        dp[0][0] = 1;
        for(int i = 1; i < n; i++) {
            int prevSum = 0;
            for(int j = 0, m = 0; j <= k; j++) {
                if(j - m > i) prevSum = (prevSum - dp[i - 1][m++] + mod) % mod;
                prevSum = (prevSum + dp[i - 1][j]) % mod;
                dp[i][j] = prevSum;
            }
        }
        return dp[n - 1][k];
    }
};