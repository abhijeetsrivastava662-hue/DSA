1class Solution {
2public:
3    void solveSudoku(vector<vector<char>>& board) {
4        solve(board);
5    }
6    bool solve(vector<vector<char>> &board){
7        for(int i=0;i<board.size();i++){
8            for(int j=0;j<board[0].size();j++){
9                if(board[i][j]=='.'){
10                    for(char c='1';c<='9';c++){
11                        if(isValid(board,i,j,c)){
12                           board[i][j]=c;
13
14                           if(solve(board)==true){
15                           return true;
16                           }
17                           else board[i][j]='.';
18                        }
19                    }
20                    return false;
21                }
22            }
23        }
24        return true;
25    }
26    bool isValid(vector<vector<char>> &board,int row,int col,char c){
27        for(int i=0;i<9;i++){
28        if(board[i][col]==c)
29        return  false;
30        if(board[row][i]==c)
31        return false;
32        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
33        return false;
34        }
35        return true;
36    }
37};