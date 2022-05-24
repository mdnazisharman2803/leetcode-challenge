class Solution {
public:
    int longestValidParentheses(string s) {
       stack<int> st;
        int maxi = 0;
        unordered_map<int, int> prevMap;
        for(int i=0; i < s.size(); i++){
            if(s.at(i) == '('){
                st.push(i);
            }else{
                if(st.empty()){
                    continue;
                }
                int index = st.top();
                st.pop();
                if(prevMap.find(index-1) != prevMap.end()){
                    prevMap[i] = prevMap[index-1]+i-index+1;
                }else{
                    prevMap[i] = i-index+1;
                }
                maxi = max(maxi, prevMap[i]);
            }
        }
        return maxi;
    }
};