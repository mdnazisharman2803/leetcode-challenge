class Solution {
public:
    bool hasAllCodes(string s, int k) {
	if(k > s.size()) return false;
    unordered_set<string> res;
    for(int i =0;i<= s.size()-k;i++)
        res.insert(s.substr(i,k));
    return res.size() == pow(2,k);
    }
};