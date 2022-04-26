class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
       int i=0,j=1,n=nums.size();
        while(j<=n){
            if(i<n){
                if(nums[i]==j){
                    i++;
                   j++;
                }else if(nums[i]<j){
                    i++;
                }else{
                  ans.push_back(j);
                    j++;
                }
            }else{
                 ans.push_back(j);
                    j++;
            }
        }
        return ans;
    }
};