class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int p= total/cost1;
        int pencil= total/cost2;
        long long counter =0;
        
        for(int i=0;i<=p;i++){
            int res=i*cost1;
            if(res<=total){
                counter +=((total-res)/cost2)+1;
            }
        }
        return counter;
    }
};