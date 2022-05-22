class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int r=0;
       int n= matrix.size();
        int c=matrix[0].size()-1;
        bool flag= false;
        while(r < n and c>=0){
            if(matrix[r][c]==target){
                  flag=true;
            }
            if(matrix[r][c]>target){
                  c--;
            }
            else{
                r++;
            }

        }
        if(flag){
            return true;
        }
      return false;
    }
};