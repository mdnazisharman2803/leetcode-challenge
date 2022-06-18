class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ns[heights.size()],ps[heights.size()];
        stack<int> nss,pss;
        int maxi=INT_MIN;
        
		//To find Previous smaller element
        for(int i=0;i<heights.size();i++){
            while(!pss.empty() && heights[pss.top()]>=heights[i]){
                pss.pop();
            }
            if(pss.empty()){
                ps[i]=(-1);
            }else{
                ps[i]=(pss.top());
            }
            
            pss.push(i);
        }
		
		//To find next smaller element
        for(int i=heights.size()-1;i>=0;i--){
            while(!nss.empty() && heights[nss.top()]>=heights[i]){
                nss.pop();
            }
            if(nss.empty()){
                ns[i]=(heights.size());
            }else{
                ns[i]=(nss.top());
            }
            
            nss.push(i);
        }
        
		//To find height of each rectangle formed using given formula
         for(int i=0;i<heights.size();i++){
             int cur=(ns[i]-ps[i]-1)*heights[i];
             maxi=max(maxi,cur);
         }
        return maxi;
    }
};