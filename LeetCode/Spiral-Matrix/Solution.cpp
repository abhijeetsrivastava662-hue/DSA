1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& mat) {
4        vector<int> ans;
5        int n= mat.size();
6        int m =mat[0].size();
7        int left=0,right=m-1;
8        int top=0,bottom=n-1;
9        while(left<=right && top<=bottom){
10        for(int i=left;i<=right;i++){
11            ans.push_back(mat[top][i]);
12        }
13        top++;
14        for(int i=top;i<=bottom;i++){
15            ans.push_back(mat[i][right]);
16        }
17        right--;
18        if(top<=bottom){
19        for(int i=right;i>=left;i--){
20            ans.push_back(mat[bottom][i]);
21        }
22        bottom--;}
23        if(left<=right){
24        for(int i=bottom;i>=top;i--){
25            ans.push_back(mat[i][left]);
26        }
27        left++;
28        }
29       }
30       return ans;
31    }
32    
33};