 class Solution {
	public :
    int PalindromicLength(string s, int i, int j){
		while(i>=0 && j<s.length() && s[i]==s[j]){
			i--;
			j++;
		}
		return (j-i-1);
	}
	public:
    string longestPalindrome(string s) {
		int maxLength = -1;
		int startIndex = 0;
		int endIndex = 0;

		for(int i=0;i<s.length();i++){
			int oddStringLength = PalindromicLength(s,i,i);
			int evenStringLength = PalindromicLength(s,i,i+1);
			int length = (oddStringLength > evenStringLength)? oddStringLength : evenStringLength;
			if(length > maxLength){
				maxLength = length;
				startIndex = i-(length-1)/2;
			}
		}

		return s.substr(startIndex,maxLength);
	}
};