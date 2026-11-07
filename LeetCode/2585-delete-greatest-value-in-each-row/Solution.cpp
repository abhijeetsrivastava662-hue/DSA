class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            sort(grid[i].begin(),grid[i].end());
        }
        for(int j=0;j<m;j++){
            int maxi=0;
            for(int i=0;i<n;i++){
                maxi=max(maxi,grid[i][j]);
            }
            ans+=maxi;
        }
        return ans;
    }
};