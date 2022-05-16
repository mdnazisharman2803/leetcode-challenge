class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>idx(1001,-1);
        int count=1;
        int curr=arr[0];
        for(int i=1;i<arr.size();i++){
            if(curr==arr[i]){
                count++;
            }
            else{
                if(idx[count]!=-1){
                    return false;
                }
                else{
                    idx[count]=1;
                }
                curr=arr[i];
                count=1;
            }
        }
        if(idx[count]!=-1){
            return false;
        }
        else{
            return true;
        }
    }
};