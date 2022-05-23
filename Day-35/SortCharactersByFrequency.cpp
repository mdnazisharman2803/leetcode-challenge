class Solution {
public:    
    static bool comp(pair<char,int> &a, pair<char,int> &b){
        return a.second > b.second;
    }
    
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        vector<pair<char,int>> v;
        for(char c: s){
            mp[c]++;
        }
        for(auto i: mp){
            v.push_back({i.first, i.second});
        }
        

        sort(v.begin(), v.end(), comp);
        
        string ans = "";
        for(auto elem: v){
            for(int i=0; i<elem.second; i++){
                ans += elem.first;
            }
        }
        return ans;
    }
};