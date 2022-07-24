class Solution {
public:

    void nextPermutation(vector<int>& nums) {

    int breakPoint = -1;


    for (int i = nums.size() - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            breakPoint = i;
            break;
        }
    }

  
    if (breakPoint==-1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    int prev= breakPoint;
    for (int i = breakPoint+ 1; i <nums.size() ; i++)
    {
        if (nums[i] > nums[breakPoint-1 ]&& nums[i]<=nums[prev])
        {
           prev= i;
           
        }
    }
        swap(nums[breakPoint-1],nums[prev]);
         reverse(nums.begin()+breakPoint,nums.end());
    }
};