class Solution { 
public:
int dx[8]={0,0,-1,-1,-1,1,1,1};
int dy[8]={-1,1,-1,0,1,-1,0,1};
int level=0;
int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
    queue<pair<int,int>>q;
    int n=grid.size();
    if(grid[0][0]==1)
        return -1;
    q.push({0,0});
    grid[0][0]=1;
    while(!q.empty()){
        level++;
        int m = q.size();
        for(int i=0 ;i<m ;i++){
            
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(x==n-1 && y==n-1)
                return level;
            for(int k=0;k<8;k++)
            {
                int x1=x+dx[k];
                int y1=y+dy[k];
                if(x1>=0 && y1>=0 && x1<n && y1<n && grid[x1][y1]==0)
                {
                    grid[x1][y1]=1;
                    q.push({x1,y1});
                }
            }
        }
        
    }
    return -1;
}};