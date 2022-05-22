class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
       int n=matrix.size(), m=matrix[0].size();
        vector<int> temp; vector<vector<int>> ans;
        
		for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                temp.push_back(matrix[j][i]);
            }
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};