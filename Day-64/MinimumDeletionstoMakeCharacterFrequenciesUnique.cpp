class Solution {
public:
    int minDeletions(string s) {
       int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
            mp[s[i]]++;
        
          int ans=0;
        
          set<int>st;
          for (auto[i,j] :mp)
        {
           while(st.find(j)!=st.end())    
            {
                 j--;
                 ans++;
            }
               if(j>0)
                st.insert(j); 
        }
        return ans; 
    }
};