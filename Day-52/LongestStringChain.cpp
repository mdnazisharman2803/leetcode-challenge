class Solution {
public:
   static bool compareLength(string &s,string &t){
        return s.size()<t.size();
    }
    bool lcs(string&s,string&t){
        if(s.size()==t.size()-1){
        int i=0;
        while(i<s.size()&&s[i]==t[i]){
            i++;
        }
            if(i==s.size()){
                return true;
            }
            else{
                while(i<s.size()&&s[i]==t[i+1]){
                    i++;
                }
                if(i==s.size())return true;
                else{return false;}
            }
        }
        else{
            return false;
        }
    }
    int longestStrChain(vector<string>& words) {
        sort(begin(words),end(words),compareLength);
        vector<int>dp(words.size()+1),prev(words.size()+1);
        for(int cur=words.size()-1;cur>=0;cur--){
            for(int pre=cur;pre>=-1;pre--){
               int take=0;
                if(pre==-1||(words[cur].size()>words[pre].size()&&lcs(words[pre],words[cur]))){
                  
                    take=prev[cur+1]+1;
                   
                }
               int notTake=prev[pre+1];
                dp[pre+1]=max(notTake,take);
               
                if(dp[pre+1]==16)return 16;
            }
            prev=dp;
        }
        return dp[0];
    }
};