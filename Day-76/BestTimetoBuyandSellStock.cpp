class Solution {
public:
    int maxProfit(vector<int>& nums) {
 
        int l=nums[0];
        int mp=0;
        for(int i=1;i<nums.size();i++){
            int profit=nums[i]-l;
            mp=max(mp,profit);
            l=min(l,nums[i]);
    }
       return mp;
    }
};