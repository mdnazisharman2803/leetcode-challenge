class Solution {
public:
    string removeDigit(string number, char digit) {
         string res=number;
        bool flag=false;
        for(int i=0;i<number.length();++i){
            if(number[i]!=digit){
                continue;
            }
            string temp=number.substr(0, i)+number.substr(i+1, number.length()-i-1);
            if(!flag){
                flag=true;
                res=temp;
                continue;
            }
            res=max(res, temp);
        }
        return res;
    }
};