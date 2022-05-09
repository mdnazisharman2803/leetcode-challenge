class Solution {
public:
    string largestGoodInteger(string num) {    
        string ans="";
        for(int i=0;i<num.size()-2;i++)
        {
             if((num[i]==num[i+1]) and (num[i+1]==num[i+2]))
             { 
               string k="";
                 k+=num[i];
                 k+=num[i+1];
                 k+=num[i+2];
                 
                 if(k>ans)
                      ans=k;
             }
        }
        
        return ans;
    }
};