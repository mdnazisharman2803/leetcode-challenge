class Solution {
public:
    int dp[501][501];
    int solve(string &s,string &t,int n,int m){
        if(n==0 && m==0) return 0;
        if(dp[n][m]!=-1) return dp[n][m];
        if(n==0) return m;
        if(m==0) return n;
        int c1 = INT_MAX,c2 = INT_MAX;
        if(s[n-1]==t[m-1]){
            return solve(s,t,n-1,m-1);
        }else{
            c1 = 1+solve(s,t,n-1,m);
            c2 = 1+solve(s,t,n,m-1);
        }
        return dp[n][m] = min(c1,c2);
    }
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        return solve(word1,word2,word1.size(),word2.size());
    }
};