class Solution {
public:
    static bool comp(vector<int> &a ,vector<int> &b){
        if(a[0]!=b[0])return a[0]<b[0];
        return a[1]>b[1];
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
         sort(envelopes.begin(),envelopes.end(),comp);
        vector<int> sub;
        for(auto it:envelopes){
            if(sub.empty() || sub[sub.size()-1]<it[1]){
                sub.push_back(it[1]);
            }
            else{
                auto x=lower_bound(sub.begin(),sub.end(),it[1]);
                *x=it[1];
            }
        }
        return sub.size();
    }
};