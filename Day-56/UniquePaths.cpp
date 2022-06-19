class Solution {
public:
    
int countpathmaze(int m,int n,int i,int j, vector<vector<int>> &ans){
    if(i==m-1 && j==n-1){
        return 1;
    }
    if(i>=m || j>=n){
        return 0;
    }


        if(ans[i][j]!=-1) return ans[i][j];
return ans[i][j] =  countpathmaze(m,n,i+1,j,ans) + countpathmaze(m,n,i,j+1,ans);
}
    int uniquePaths(int m, int n) {
             vector<vector<int>> ans (m+1, vector<int>(n+1, -1));
        return countpathmaze(m,n,0,0,ans);
    }
};