class Solution {
public:
    double myPow(double x, int n) {
      	if(n == 0 || x == 1.0){
		return 1;
	}
	if(n == 1){
		return x;
	}
	else if(n % 2 == 0){
		return myPow(x * x, n / 2);
	}
	else if(n % 2 == 1){
		return x * myPow(x, n - 1);
	}
	else{
		return 1 / myPow(x, -n);}
    }
};