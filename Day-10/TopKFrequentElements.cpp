class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> a;
        sort(nums.begin(),nums.end());  
        int c=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)     
        {
            c++;
            if(i==nums.size()-1)
            {
                a.push_back(make_pair(c,nums[i]));
            }
            else if(nums[i]!=nums[i+1])
            {
                a.push_back(make_pair(c,nums[i]));
                c=0;
            }
        }
        sort(a.begin(),a.end());                            
        for(int i=a.size()-1;k-->0;i--)                   
            ans.push_back(a[i].second);
        return ans;
    }
};