class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<pair<int,int>>p;
        vector<int>ans;
     for(int i=0;i<nums.size();i++){
         if(nums[i]%2==0){
             p.push_back(make_pair(nums[i],0));
         }
         else{
               p.push_back(make_pair(nums[i],1));
         }
     }
        
        for(int i=0;i<p.size();i++){
            if(p[i].second==0){
                ans.push_back(p[i].first);
            }
        }
         
        for(int i=0;i<p.size();i++){
            if(p[i].second!=0){
                ans.push_back(p[i].first);
            }
            
        }
        
        return ans;
        
    }
};