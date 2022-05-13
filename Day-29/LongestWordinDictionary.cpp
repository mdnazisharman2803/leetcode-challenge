class Solution {
public:
    string longestWord(vector<string>& words) {
       sort(words.begin(), words.end());
        stack<string> s;
        s.push("");
        int size = 0;
        string ans;
        for (string& w : words) {
            while (s.top() != w.substr(0, s.top().size())) s.pop();
            if (s.top().size() != w.size() - 1) continue;
            s.push(w);
            if (s.size() > size) {
                size = s.size();
                ans = s.top();
            }
        }
        return ans; 
    }
};