class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int row=people.size();
    vector<vector<int>>ans(row);
    
    sort(people.begin(),people.end());
    
    for(int i=0;i<row;i++){
        int pos=people[i][1];
        int j=0,big=0;
        
        while(j<pos){
            if(ans[j].size()==0 )big++;
            else if(ans[j][0]>=people[i][0])big++;
            j++;
        }
        
         while((ans[pos].size()!=0  || big<people[i][1]) && pos<row-1){
             if(ans[pos].size()==0 )big++;
             else if(ans[pos][0]>=people[i][0])big++;
             pos++;
         }
        
        ans[pos]={people[i][0],people[i][1]};
    }
    return ans;

    }
};