1class Solution {
2    public:
3    bool isSafe(int row,int col,vector<string> &board,int n){
4        //check upper diagonal
5        int duprow=row;  //dont why this is written
6        int dupcol=col;
7
8        while(row>=0 && col>=0){
9            if(board[row][col]=='Q') return false;
10            else{
11                row--;
12                col--;
13            }
14        }
15         col=dupcol;  
16        row=duprow;
17       
18        while(col>=0){
19           if(board[row][col]=='Q') return false;
20           else col--; 
21        }
22
23        row=duprow;
24        col=dupcol;
25        while(row<n && col>=0){
26           if(board[row][col]=='Q') return false;
27           else{
28            row++;
29            col--;
30           } 
31        }
32return true;
33
34    }
35    public:
36    void solve(int col,vector<string> &board, vector<vector<string>> &ans,int n){
37        if(col==n){
38            ans.push_back(board);
39            return;
40        }
41
42        for(int row=0;row<n;row++){
43            if(isSafe(row,col,board,n)){
44               board[row][col]='Q';
45               solve(col+1,board,ans,n);
46               board[row][col]='.';
47            }
48        }
49    }
50public:
51    vector<vector<string>> solveNQueens(int n) {
52       vector<vector<string>> ans;
53       vector<string> board(n);
54       string s(n ,'.');
55       for(int i=0;i<n;i++){
56        board[i]=s;
57       } 
58
59       solve(0,board,ans,n);
60       return ans;
61    }
62};