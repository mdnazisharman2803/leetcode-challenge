class Solution {
public:
    string convertToBase7(int num) {
        
    string ans="";
       
    if(num < 0)
    {
        ans= "-" + convertToBase7(-num);
        return ans;
    }
    else if(num < 7) {
        ans= to_string(num);
        return ans;
    }
    else
    {
         ans= convertToBase7(num/7) + convertToBase7(num%7);
         return ans;
    }
    }
};