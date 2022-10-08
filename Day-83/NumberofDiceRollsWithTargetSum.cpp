class Solution {
public:
    long long mod=1e9+7;
    long long dp[31][1001];
    long long solve(int i,int n,int k,int tar){
        if(tar<0)return 0;
        if(i>n){
            if(tar==0){
                return 1;
            }
            return 0;
        }
        if(dp[i][tar]!=-1)return dp[i][tar];
        long long x=0;
        for(int j=1;j<=k;j++){
            x+=solve(i+1,n,k,tar-j);
        }
        return dp[i][tar]=(x%mod);
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return (int)(solve(1,n,k,target)%mod);
    }
};