class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
         int total = 0;
        for (int num: nums) {
            total += num;
        }
        if (total < x) return -1;
        total = total - x;
        int i = 0, j = 0, sum = 0, ans = INT_MIN, n = nums.size();
        while (i < n) {
            sum = sum + nums[i];
            if (sum == total) {
                ans =max(ans, i - j + 1);
            } else if (sum > total) {
                while (j <= i && sum > total) {
                    sum = sum - nums[j];
                    j++;
                }
                if (sum == total) {
                    ans =max(ans, i - j + 1);
                }
            }
            i++;
        }
        if (ans == INT_MIN) return -1;
        return nums.size() - ans;
    }
};