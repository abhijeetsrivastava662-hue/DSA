class Solution {
public:
    int bfs(int row,int col,vector<vector<int>>& grid,vector<vector<int>> &vis,int cnt){
        cnt=0;
        vis[row][col]=1;
        cnt++;
        queue<pair<int,int>> q;
        q.push({row,col});
        int n=grid.size();
        int m=grid[0].size();
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();

            int delrow[]={0,-1,0,+1};
            int delcol[]={-1,0,+1,0};
            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                    cnt++;
                
                }
            }
        }
        return cnt;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    int area=bfs(i,j,grid,vis,cnt);
                    maxi=max(maxi,area);
                }
            }
        }
        return maxi;
    }
};