1class Solution {
2public:
3    int finalValueAfterOperations(vector<string>& operations) {
4        int x = 0;
5        for(string op : operations){
6        if(op[1]=='+'){
7            x++;
8        }else 
9            x--;
10}
11        return x;
12    }
13};