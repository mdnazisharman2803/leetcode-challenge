class Solution {
public:
    int fib(int n) {
        long long k;
        if(n<=1){
            return n;
            
        }
     
 
     k=fib(n-1)+fib(n-2);
 
        return k;
    }
};