class Solution {
public:
    
    int threeSumClosest(vector<int> &num, int target) {
          int n = num.size();
        sort(num.begin(), num.end());
        int minDifference = INT_MAX, sum = 0;
        for(int i = 0; i < n-2; i++) {
            int j = i + 1, k = n-1;
            while (j < k) {
                int difference = target - num[i] - num[j] - num[k];
                if (abs(difference) < minDifference) {
                    minDifference = abs(difference);
                    sum = num[i] + num[j] + num[k];
                }
                if (difference > 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        return sum;
    
    }
};