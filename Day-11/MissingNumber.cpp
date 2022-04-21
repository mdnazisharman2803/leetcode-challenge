class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k=nums.size();
        int i=0;
        sort(nums.begin(),nums.end());
       
        for(i=0;i<k;i++){
            if(nums.at(i) == i)
               continue;
           break;
        }
        return i;
    }
};