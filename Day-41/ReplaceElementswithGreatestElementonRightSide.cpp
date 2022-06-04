class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int m = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            int k = arr[i];
            arr[i] = m;
            m = max(k, m);
        }
        return arr;
    }
};