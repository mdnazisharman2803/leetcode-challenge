class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
       vector<vector<int>> result;
   
        if(interval.size()==0)return result;
  
        sort(interval.begin(),interval.end());
   
        vector<int> temp=interval[0];
       

        for(auto it:interval)
        {
            if(it[0]<=temp[1]){
                 temp[1]=max(it[1],temp[1]);
              
            }
            else{
                 result.push_back(temp);
                temp=it;
            }
           
        }
        result.push_back(temp);
        return result;
    }
};