class Solution {
public:
   void reversing(string &str){
        int start =0;
        int end = str.length()-1;
        while(start<end){
            swap(str[start++],str[end--]);
        }
    }
public:
    int reverse(int x) {
        string str = to_string(x);
        bool signFlag = true;
        if(str[0] == '-')
            signFlag = false;
        
        if(signFlag != true){
            str.erase(str.begin());
        }
        
       reversing(str);
        long int y = stol(str);
        if(y>INT_MAX)
            return 0;
        if(signFlag== false)
            y = -y;
        return y;
    }
};