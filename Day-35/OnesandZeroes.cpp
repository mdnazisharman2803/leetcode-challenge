class Solution {
public:
    
    pair<int,int> getcount(string &s)
    {
        int count0=0,count1=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
                count0++;
            else
                count1++;
        }
        return {count0,count1};
    }
    int findmax(vector<string> &str,int i,int m,int n,vector<vector<vector<int>>> &dp)
    {
        if(i==str.size()||(m==0&&n==0))
            return 0;
        if(dp[i][m][n]!=-1)
            return dp[i][m][n];
        pair<int,int> count=getcount(str[i]);
        if(count.first<=m&&count.second<=n)
        {
            dp[i][m][n]=max(1+findmax(str,i+1,m-count.first,n-count.second,dp),findmax(str,i+1,m,n,dp));
        }
        else
            dp[i][m][n]=findmax(str,i+1,m,n,dp);
        return dp[i][m][n];
    }
    int findMaxForm(vector<string>& str, int m, int n) {
        vector<vector<vector<int>>> dp(str.size(),vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return findmax(str,0,m,n,dp);
    }
};
