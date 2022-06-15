class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    
      stack<int> st;
      vector<int>ans(nums);
    for(int i=nums.size()-1;i>=0;i--)
    {
        st.push(nums[i]);
    }
    for(int i=nums.size()-1;i>=0;i--)
    {
        if(st.empty() == true)
        {
            st.push(nums[i]);
        }
        else
        {
            while(st.empty() == false && nums[i] >= st.top())
            {
                st.pop();
            }
           
            if(st.empty() == true)
            {
                ans[i] = -1;
            }
            else
            {   
                ans[i] = st.top();
            }
            st.push(nums[i]);
        }
    }
    
    return ans; 
    }
};