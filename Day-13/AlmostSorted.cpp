#include<bits/stdc++.h>
using namespace std;
 

 vector<int> f(vector<int> arr){
     int n = arr.size();
     int l=-1, h = n;


     for(int i=1; i<n; i++){
         if(arr[i] < arr[i-1]) l = i;
     }

     for(int i=n-1; i>=0; i--){
         if(arr[i] > arr[i+1]) h = i;
     }

     if( l < h) return {-1, -1};
     return {h+1, l+1};
 }
 
int main()
{
    int n; cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr.push_back(x);
        
    }
    vector<int> res = f(arr);
    cout<<res[0]<<" "<<res[1];
    return 0;
}