class Solution {
public:
void swaps(vector<int>&nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    void nextPermutation(vector<int>& nums) {
        int start = nums.size() - 1;
       while (start > 0 && nums[start-1] >= nums[start]) {
             start--;
       }
       if (start > 0) {
           int end = nums.size() - 1;
           while (nums[end] <= nums[start-1]){ 
                  end--;
                 }
           swaps(nums, start-1, end);
       }
     
       for (int i=start; i<(start+nums.size())/2; i++) {
          swaps(nums, i, nums.size()-1+start-i);         
       }
    }
};