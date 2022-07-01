class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
         priority_queue <pair <int,int>> pq;
        for(auto &it:boxTypes){
            pq.push({it[1],it[0]});
        }
        int cnt=0,ans=0;
        while(!pq.empty()){
     
            if(cnt + pq.top().second >= truckSize){
                ans += pq.top().first * (truckSize - cnt);
                break;
            }
            ans += pq.top().first * pq.top().second;
            cnt += pq.top().second;
            pq.pop();
        }
        return ans;
    }
};