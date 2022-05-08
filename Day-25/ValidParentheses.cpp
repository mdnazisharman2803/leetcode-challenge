class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        // declaring a map such that opening bracket will have negative value and  
        // respective closing bracket will have positive value
unordered_map<char,int> m={{'[',-1 }, {'(',-2 }, {'{',-3 }, {']', 1},{')', 2},{'}', 3}};
    for(char br: s){
        // it means we are checking opening bracket as value is less than 0,simple push to stack
        if(m[br]<0){
            st.push(br);
        }else{
            // before checking for closing bracket checking if stack is empty ,if empty means unbalenced
            if(st.empty()) return false;
            
            char tops=st.top();
            st.pop();
 // now if stack is not empty then the addition of closing + opening bracket of same type should be 0, so if its not zero means unbalanced
            if(m[tops]+m[br]!=0){
                return false;
            }
        }
    }
    // after checking all if nothing in stack means its balaced otherwise not
    if(st.empty()) return true;
     return false;
    
    }
};