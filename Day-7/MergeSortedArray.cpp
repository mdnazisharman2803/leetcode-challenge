class Solution {
    // added 
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = nums1.size() - 1;
        int j = m - 1;
        int k = n - 1;
        
       
        
        while (i >= 0)
        {
            if (j < 0)
            {
                nums1[i--] = nums2[k--];
                continue;
            }
            else if (k < 0)
            {
                nums1[i--] = nums1[j--];
                continue;
            }
            
            if (nums1[j] >= nums2[k])
            {
                nums1[i--] = nums1[j--];
            }
            else
            {
                nums1[i--] = nums2[k--];
            }
        }
        
    }
};