class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    continue;
                }
                bool ok =false;
                //check row
                for(int k=0;k<m;k++){
                    if(k!=j && grid[i][k]==1){ //k!=i matlab vo same server nhi hona chaiye
                        ok=true;
                        break;
                    }
                }
                //check col
                for(int k=0;k<n;k++){
                    if(k!=i && grid[k][j]==1){//k!=j matlab vo same server nhi hona chaiye
                        ok=true;
                        break;
                    }
                }
                if(ok){
                    ans++;
                }
            }
        }
        return ans;
    }
};