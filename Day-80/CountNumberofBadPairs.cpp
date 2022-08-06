class Solution {
public:
    long long countBadPairs(vector<int>& arr) {
     unsigned long long int n=arr.size();    
        
    unordered_map<  long long int,   long long int> map;
    for (int i = 0; i < n; i++)
        map[arr[i] - i]++;
 
    
   unsigned long long int res = 0;
    for (auto x : map) {
       unsigned long long int cnt = x.second;
 
        res += ((cnt * (cnt - 1)) / 2);
    }
 
     unsigned long long int tot=n*(n-1)/2;
    return tot-res;
    }
};