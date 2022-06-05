class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp(heights);
        sort(temp.begin(), temp.end());
        int n = heights.size();
        int count = 0;
        for (int i = 0; i < n; i++){
            if (heights[i] != temp[i]){
                count ++;
            }
        }
        return count;
    }
};