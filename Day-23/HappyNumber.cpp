class Solution {
public:
    bool isHappy(int n) {
      int ans = 0;
        while(n>9){
            ans = 0;
            while(n>0){
                int rem = pow(n%10, 2);
                ans+= rem;
                n=n/10;
            }
            n = ans;
        }
        if(n==1 || n==7){
            return true;
        }
        else{
            return false;
        }
    }
};