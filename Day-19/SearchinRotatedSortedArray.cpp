class Solution {
    public:
    
    int binarySearch(vector<int>& nums , int start , int end , int target){
        if(start > end)
            return -1;
        int mid = (start+end)/2;
        
        if(target == nums[mid])
            return mid;
        else{
            int x = binarySearch(nums , start , mid-1 , target);
            if(x < 0){
                return binarySearch(nums , mid+1 , end , target);
            }else{
                return x;
            }
        }
        
    }
public:
    int search(vector<int>& nums, int target) {
           if(nums.size() == 0){
            return -1;
        }
        
        return binarySearch(nums, 0 , nums.size()-1 , target);
        
    }    
    
};



    