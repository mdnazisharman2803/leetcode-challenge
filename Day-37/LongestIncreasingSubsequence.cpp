class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
  vector<int> sub;
        for(auto it:nums){
            if(sub.empty() || sub[sub.size()-1]<it){
                sub.push_back(it);
            }
            else{
                auto x=lower_bound(sub.begin(),sub.end(),it);//index of >=it value
                *x=it;
            }
        }
        return sub.size();
    }
};