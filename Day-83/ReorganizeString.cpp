class Solution {
public:
    string reorganizeString(string s) {
        string ans;
        unordered_map<char,int>mp;
        for(auto &it:s) mp[it]++;
        priority_queue<pair<int,char>>mxHeap;
        for(auto it:mp){
            mxHeap.push(make_pair(it.second,it.first));
        }
        
        while(mxHeap.size()>1)
        {
            auto t1=mxHeap.top(); mxHeap.pop();
            auto t2=mxHeap.top(); mxHeap.pop();
            
            ans+=t1.second; ans+=t2.second;
            t1.first-=1; t2.first-=1;
            
            if(t1.first>0){
                mxHeap.push(t1);
            }
            if(t2.first>0){
                mxHeap.push(t2);
            }
            
        }
        if(!mxHeap.empty()){
            if(mxHeap.top().first>1)
                return "";
            else
                ans+=mxHeap.top().second;
                
        }
    
        return ans;
    }
};