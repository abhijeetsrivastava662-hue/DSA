1class Solution {
2public:
3    int FindMaxValueInCol(vector<vector<int>>& mat,int n,int m,int col){
4        int index=-1;
5        int max_value=-1;
6        for(int i=0;i<n;i++){
7            if(mat[i][col]>max_value){
8                max_value=mat[i][col];
9                index=i;
10            }
11        }
12        return index;
13    }
14    vector<int> findPeakGrid(vector<vector<int>>& mat) {
15        int n=mat.size();
16        int m=mat[0].size();
17        int low=0;
18        int high=m-1;
19        while(low<=high){
20            int mid=low+(high-low)/2;
21            int maxRowIndex=  FindMaxValueInCol(mat,n,m,mid);
22            int left=mid-1>=0 ? mat[maxRowIndex][mid-1]: -1;
23            int right =mid+1<m ? mat[maxRowIndex][mid+1]: -1;
24            if(mat[maxRowIndex][mid]>left && mat[maxRowIndex][mid]>right) return {maxRowIndex,mid};
25            else if(mat[maxRowIndex][mid]<left) high=mid-1;
26            else low=mid+1;
27        }
28        return {-1,-1};
29    }
30};