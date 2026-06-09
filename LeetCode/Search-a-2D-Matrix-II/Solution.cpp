1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& mat, int target) {
4        int n=mat.size();
5        int m=mat[0].size();
6        int row=0,col=m-1;
7        while(row<n && col>=0){
8            if(mat[row][col]==target)
9            return true;
10            else if(mat[row][col]<target) row++;
11            else col--;
12        }
13        return false;
14    }
15};