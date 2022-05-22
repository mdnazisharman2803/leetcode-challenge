class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int dir = 0;         
        int n = mat.size();   
        if(n == 0) return ans;
        int m = mat[0].size(); 
        int count = 0;
        int i=0, j=0;
        while(count<m*n)
        {
            if(dir==0)
            {
                ans.push_back(mat[i][j]);
                j++;
                i--;
                if(i < 0 && j <= m-1) {
                    i++; 
                    dir = 1;
                }
                else if(j > m-1) {
                    i = i+2; 
                    j = m-1; 
                    dir= 1;
                }
            }
            else
            {
                ans.push_back(mat[i][j]);
                j--;
                i++;
                if(j < 0 && i <= n-1) {
                    j++; 
                   dir = 0;
                }
                else if(i > n-1) {
                    j = j+2; 
                    i = n-1; 
                   dir = 0;
                }
            }
            count++;
        }
        return ans;
    }
};