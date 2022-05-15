class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        for(int i = 0; i < nums.size()-1; i++){
            int mn = nums[i];
            int mx = nums[i];
            for(int j = i; j < nums.size(); j++) {
                mn = min(mn, nums[j]);
                mx = max(mx, nums[j]);
                ans += (mx-mn);
            }
        }
        return ans;
    }
};