1class Solution {
2public:
3    int orangesRotting(vector<vector<int>>& grid) {
4        int n=grid.size();
5        int m=grid[0].size();
6
7        //{{row(r),col(c)},time(t)}
8        queue<pair<pair<int,int>,int>> q;
9        int vis[n][m];
10        for(int i=0;i<n;i++){
11            for(int j=0;j<m;j++){
12               if(grid[i][j]==2){
13                q.push({{i,j},0});
14                vis[i][j]=2;
15               }else{
16                vis[i][j]=0;
17               }
18            }
19        }
20
21        int tm=0;
22        int drow[]={-1,0,+1,0};
23        int dcol[]={0,+1,0,-1};
24        while(!q.empty()){
25            int r=q.front().first.first;
26            int c=q.front().first.second;
27            int t=q.front().second;
28            tm=max(tm,t);
29            q.pop();
30            for(int i=0;i<4;i++){
31                int nrow=r+drow[i];
32                int ncol=c+dcol[i];
33                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
34                    q.push({{nrow,ncol},t+1});
35                    vis[nrow][ncol]=2;
36                }
37            }
38
39        }
40        for(int i=0;i<n;i++){
41            for(int j=0;j<m;j++){
42                if(vis[i][j]!=2 && grid[i][j]==1) return -1;
43            }
44        }
45        return tm;
46    }
47};