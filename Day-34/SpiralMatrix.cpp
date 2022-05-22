class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row_start =0, row_end=matrix.size()-1,column_start=0,column_end=matrix[0].size()-1;
        vector<int>ans;
        int dir = 0;
while( row_start <= row_end && column_start <= column_end){
    if (dir == 0) {
           for(int col=column_start;col<=column_end; col++ ){
               ans.push_back(matrix[row_start][col]);
           } 
           row_start++; 
    }
    if (dir == 1) {
           for(int row=row_start;row<= row_end;row++){
               ans.push_back(matrix[row][column_end]);
           }
           column_end--;
    }
    if (dir == 2) {
           for(int col=column_end;col>=column_start;col--){
               ans.push_back(matrix[row_end][col]);
           }
           row_end--;
    }
    if (dir == 3) {
           for(int row=row_end;row>=row_start;row--){
              ans.push_back(matrix[row][column_start]);
           }
           column_start++;
    }
    dir = (dir + 1) % 4;
}
        return ans;
    }
};