class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
         int m = matrix.size(),n = matrix[0].size();
        int ret = 0;
        for(int l =0;l<n;++l){ 
            vector<int> rows(m,0);
            for(int r =l;r<n;++r){ 
                int sum = 0; 
                unordered_map<int,int> hash;
                hash[0]=1;
                for(int i = 0; i < m;++i){
                    rows[i]+=matrix[i][r];
                    sum+=rows[i]; 
                    if(hash.count(sum-target)>0) 
                        ret+=hash[sum-target];
                    hash[sum]++;
                }
            } 
        }
        return ret;
    }
};