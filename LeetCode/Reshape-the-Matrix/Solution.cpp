1class Solution {
2public:
3    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
4        int m = mat.size();
5        int n = mat[0].size();
6
7        if (m * n != r * c)
8            return mat;
9
10        vector<vector<int>> ans(r, vector<int>(c));
11
12        int row = 0, col = 0;
13
14        for (int i = 0; i < m; i++) {
15            for (int j = 0; j < n; j++) {
16                ans[row][col] = mat[i][j];
17                col++;
18
19                if (col == c) {
20                    col = 0;
21                    row++;
22                }
23            }
24        }
25
26        return ans;
27    }
28};