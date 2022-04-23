class Solution {
public:
    int climbStairs(int n) {
         int rs[n + 1];
    rs[0] = 1;
    for(int i = 1; i <= n; i++){
         rs[i] =  rs[i - 1];
        if(i >= 2){
             rs[i] +=  rs[i - 2];
        }
       
    }
    return  rs[n];
    }
};