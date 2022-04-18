class Solution {
public:
    int mySqrt(int x) {
   int low=0,high=x;
        while(low<=high){
            long long int mid=(low+high)/2;
            long long int tmp=mid*mid;
            if(tmp==x) return mid;
            else if(tmp<x) low=mid+1;
            else high=mid-1;
        }
        return low-1;
    }
};