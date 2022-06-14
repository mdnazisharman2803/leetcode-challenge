class Solution {
public:
    string reverseWords(string s) {
       string str="";
        stack<char>st;
        for(int i=0;i<s.length();++i){
            if(s[i]!=' '){
                st.push(s[i]);
            }else{
                while(!st.empty()){
                    str+=st.top();
                    st.pop();
                }
                str+=' ';
            }
        }
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        return str;
    }
};