class Solution {
public:
    
    int traverse(vector<vector<int>>& triangle,int row,int idx,int **ans){
       if(row == triangle.size() || idx == triangle[row].size())
            return 0;
        if(ans[row][idx] != -1)
            return ans[row][idx];
       
        int sum;
        sum = triangle[row][idx] + min(traverse(triangle, row+1, idx,ans), traverse(triangle, row+1, idx+1,ans));
        
        return ans[row][idx] =sum;
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
         int n=triangle.size();
        int **ans = new int*[n+1];
        for(int i=0; i<=n; i++){
           ans[i] = new int[n+1];
            for(int j=0; j<=n; j++){
                ans[i][j] = -1;
            }
        }
        
        return traverse(triangle, 0, 0, ans);
    }
};