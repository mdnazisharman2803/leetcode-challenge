class Solution {
    int dp[100][21][101];
    
    int getMin(vector<int>& house, vector<vector<int>> &cost, int target, int idx, int prev, int neighbour){
        if(neighbour > target)return INT_MAX;
        if(idx == cost.size()){
            if(neighbour !=  target)return INT_MAX;
            return 0;
        }
        
        if(dp[idx][prev + 1][neighbour] != -1)return dp[idx][prev + 1][neighbour];
        
        if(house[idx] != 0){
            int nneig;
            prev == house[idx] -1 ? nneig = neighbour : nneig = neighbour + 1;
            return dp[idx][prev + 1][neighbour] = getMin(house, cost, target, idx + 1, house[idx] - 1, nneig);
        }
        
        int n = cost[0].size();
        int ans = INT_MAX;
        for(int i = 0; i < n; i++){
            int nneig;
            prev == i ? nneig = neighbour : nneig = neighbour + 1;
            
            int temp = getMin(house, cost, target, idx + 1, i, nneig);
            if(temp != INT_MAX) temp += cost[idx][i];
            
            ans = min(ans, temp);
        }
        return  dp[idx][prev + 1][neighbour] = ans;
    }
public:
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        memset(dp,-1,sizeof dp);
        int temp = getMin(houses, cost, target, 0, -1, 0);
        return temp == INT_MAX ? -1 : temp;
    }
};