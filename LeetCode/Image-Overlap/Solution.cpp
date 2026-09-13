1class Solution {
2public:
3    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
4        int n=img1.size();
5        int ans=0;
6        for(int down =-(n-1);down<=(n-1);down++){
7            for(int right =-(n-1);right<=(n-1);right++){
8                int cnt=0;
9
10                for(int row=0;row<n;row++){
11                    for(int col=0;col<n;col++){
12                        if(img1[row][col]==1){
13                        int newrow=row+down;
14                        int newcol=col+right;
15                        if(newrow>=0 && newrow<n && newcol>=0 && newcol<n && img2[newrow][newcol]==1){
16                            cnt++;
17                        }
18                        }
19                    }
20                }
21                ans=max(ans,cnt);
22            }
23            
24        }
25        return ans;
26    }
27};