class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
     int currentSum=0,maxSum=INT_MIN,i = 0, j = 0;
         unordered_map<int, int> freq;
        while(j < nums.size()) {
           freq[nums[j]]++;
            currentSum += nums[j];
            
            if(freq.size() == j - i + 1) maxSum = max(maxSum, currentSum);
            
            while(freq.size() < j - i + 1) {
                freq[nums[i]]--;
                currentSum -= nums[i];
                if(!freq[nums[i]]) freq.erase(nums[i]);
                i++;
            }
            j++; 
        }
        
        return maxSum; 
        
         
    }
};