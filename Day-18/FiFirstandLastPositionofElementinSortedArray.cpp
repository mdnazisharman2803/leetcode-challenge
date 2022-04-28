class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
    vector<int> ans;
    int mini=INT_MAX;
   int count=0;
      for(int i=0;i<nums.size();i++){
          if(nums[i]==target){
              count++;
              mini=min(i,mini);
          }
      
        }
        if(count==0){
            
               ans.push_back(-1);
             
              ans.push_back(-1);
              return ans;
        }
        
              ans.push_back(mini);
             
              ans.push_back(count+mini-1);
                return ans;
          
       
    }
};