class Solution {
public:
    int rob(vector<int>& nums) {
    // let us add first element of array in sum from start and max sum =0
        int added = nums[0];
        int maxsum = 0;

        for (int i = 1; i < nums.size(); i++) {
            // we will now run loop from index 1 and check if nums[0] or maxsum which is greater will be assigned to updated sum again we will now update added to maxsum +nums[i]
            int updateAdded = max(added,maxsum);
           
            added =maxsum+ nums[i];
            
           maxsum = updateAdded;
        }
        return max(added,maxsum);
    }
};