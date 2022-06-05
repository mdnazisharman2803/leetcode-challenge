class Solution {
public:
    int totalNQueens(int n) {
        int counter = 0;
        vector<int> v;
        helper(n, v, counter);
        return counter;
    }
    void helper(int n, vector<int> &v, int &c) {
        if (v.size() == n) {
            ++c;
            return;
        }
        for (int i = 0; i < n; ++i) {
            if (conflict(v, i)) continue;
            v.push_back(i);
            helper(n, v, c);
            v.pop_back();
        }
    }
    bool conflict(const vector<int> &v, int j) {
        for (int i = 0; i < v.size(); ++i) {
            if (v[i] == j) return true;
            if (v.size() - i == abs(v[i] - j)) return true;
        }
        return false;
    }
};