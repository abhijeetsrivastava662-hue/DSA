1class Solution {
2public:
3    int numEnclaves(vector<vector<int>>& grid) {
4        queue<pair<int,int>> q;
5        int n=grid.size();
6        int m=grid[0].size();
7        vector<vector<int>> vis(n, vector<int>(m, 0));
8        for(int i=0;i<n;i++){
9            for(int j=0;j<m;j++){
10                if(i==0 || i==n-1 || j==0 ||j==m-1){
11                    if(grid[i][j]==1){
12                       q.push({i,j});
13                       vis[i][j]=1;
14                    }
15                }
16            }
17        }
18            int delrow[]={-1,0,+1,0};
19            int delcol[]={0,+1,0,-1};
20            while(!q.empty()){
21                int row=q.front().first;
22                int col=q.front().second;
23                q.pop();
24                for(int i=0;i<4;i++){
25                    int nrow=row+delrow[i];
26                    int ncol=col+delcol[i];
27                    if(nrow>0 && nrow<=n-1 && ncol>0 && ncol<=m-1 && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
28                        q.push({nrow,ncol});
29                        vis[nrow][ncol]=1; 
30                    }
31                }
32            }
33            int cnt=0;
34            for(int i=0;i<n;i++){
35                for(int j=0;j<m;j++){
36                    if(vis[i][j]==0 && grid[i][j]==1){
37                        cnt++;
38                    }
39                }
40            }
41            return cnt;
42    }
43};