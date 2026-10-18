class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid[0].size();
        int m=grid.size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        int r=0,c=0;
        while(true){
            vis[r][c]=true;
            int nr=r,nc=c;
            if(grid[r][c]=='L')nc--;
            else if(grid[r][c]=='R')nc++;
            else if(grid[r][c]=='U')nr--;
            else nr++;

            if(nr<0||nr>=m||nc<0||nc>=n){
                return {r,c};
            }
            if(vis[nr][nc]==true){
                return {r,c};
            }
            r=nr;
            c=nc;
        }
        return {r,c};
    }
};