class Solution {
public:
       int trap(vector<int>& height) {
        int ans = 0;
        vector<int> left;
        stack<int> st;
        for(auto &it : height){
            while(st.size() and st.top() <= it) st.pop();
            left.push_back(st.size() ? st.top() : -1);
            if(!st.size()) st.push(it);
        }
        while(st.size()) st.pop();
        for(int i=height.size()-1;i>=0;i--){
            while(st.size() and st.top() <= height[i]) st.pop();
            if(st.size() and left[i] != -1){
                ans += (min(left[i],st.top()) - height[i]);
            }
            if(!st.size()) st.push(height[i]);
        }
        return ans;  
    }
};