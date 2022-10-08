class Solution {
public:
   int minCost(string colors, vector<int>& neededTime) {
        int ans = 0, n = colors.size();
        for(int i=0;i<n-1;i++){
            if(colors[i]==colors[i+1]){
                if(neededTime[i]<neededTime[i+1]){
                    ans+=neededTime[i];
                }
                else{
                    ans+=neededTime[i+1];
                    neededTime[i+1]=neededTime[i];
                }
            }
        }
        return ans;
    }
};