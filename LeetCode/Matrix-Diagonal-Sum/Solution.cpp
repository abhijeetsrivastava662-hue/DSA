1class Solution {
2public:
3    int diagonalSum(vector<vector<int>>& mat) {
4        int sum =0;
5        int start=0;
6        int end=mat.size()-1;
7        for(int i=0;i<mat.size();i++){
8            if(start==end) sum-=mat[i][start];
9            sum+=mat[i][start] + mat[i][end];
10            start++;
11            end--;
12        }
13        return sum;
14        
15    }
16};