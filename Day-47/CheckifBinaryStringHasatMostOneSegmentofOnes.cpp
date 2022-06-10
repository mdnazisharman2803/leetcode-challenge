class Solution {
public:
    bool checkOnesSegment(string s) {
     string str =s;
string str2 ("01");

if (str.find(str2) != string::npos) {
 return false;
} 
        return true;
    }
};