1class Solution {
2public:
3    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
4        int n=mat.size();
5        int m=mat[0].size();
6        vector<vector<int>> vis(n,vector<int>(m,0));
7        vector<vector<int>> dist(n,vector<int>(m,0));
8        queue<pair<pair<int,int> ,int>> q;
9        for(int i=0;i<n;i++){
10            for(int j=0;j<m;j++){
11                if(mat[i][j]==0){
12                    q.push({{i,j},0});
13                    vis[i][j]=1;
14                }else{
15                    vis[i][j]=0;
16                }
17            }
18        }
19        int delrow[]={-1,0,+1,0};
20        int delcol[]={0,+1,0,-1};
21        while(!q.empty()){
22            int row=q.front().first.first;
23            int col=q.front().first.second;
24            int steps=q.front().second;
25            q.pop();
26            dist[row][col]=steps;
27            for(int i=0;i<4;i++){
28                int nrow=row+delrow[i];
29                int ncol=col+delcol[i];
30                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0){
31                    q.push({{nrow,ncol},steps+1});
32                    vis[nrow][ncol]=1;
33                }
34            }
35        }
36        return dist;
37    }
38};