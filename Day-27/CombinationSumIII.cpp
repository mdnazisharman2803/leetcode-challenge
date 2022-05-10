class Solution {
public:
 void CombinationSum(int start,int n,int k,vector<int> &temp,vector<vector<int>> &ans)
    {
        if(k<=0)
        {
            if(n==0) ans.push_back(temp);
            return;
        }
        
        for(int i=start;i<=9;i++)    
        {
            temp.push_back(i);
            CombinationSum(i+1,n-i,k-1,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>> ans;
        vector<int> temp;
        CombinationSum(1,n,k,temp,ans);
        return ans;
    }
};