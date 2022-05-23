
class Solution {

public:
  
        static bool comp(string a, string b)
{
    string val1 = a + b;
    string val2 = b + a;
    return val1 > val2;
}
    
    string largestNumber(vector<int>& nums) {
        vector<string> a;
        int c=0;
        for(auto t: nums)
            a.push_back(to_string(t));
        sort(a.begin(),a.end(),comp);
        string s="";
        for(auto t: a)
            s+=t;
        for(auto t:s)
            if(t!='0')
                c=1;
        if(c==1)
        return s;
        else 
            return "0";
    }
    
};