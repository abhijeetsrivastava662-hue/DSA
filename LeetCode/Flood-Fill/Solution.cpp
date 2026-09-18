1class Solution {
2public:
3    void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,int inicolor,int color,int delrow[],int delcol[]){
4        ans[row][col]=color;
5        int n=image.size();
6        int m=image[0].size();
7        for(int i=0;i<4;i++){
8            int nrow=row+delrow[i];
9            int ncol=col+delcol[i];
10            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicolor && ans[nrow][ncol]!=color){
11                dfs(nrow,ncol,ans,image,inicolor,color,delrow,delcol);
12            }
13        }
14    }
15    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
16        int inicolor=image[sr][sc];
17        vector<vector<int>> ans=image;
18        int delrow[]= {-1,0,+1,0};
19        int delcol[]= {0,+1,0,-1};
20        dfs(sr,sc,ans,image,inicolor,color,delrow,delcol);
21        return ans;
22    }
23};