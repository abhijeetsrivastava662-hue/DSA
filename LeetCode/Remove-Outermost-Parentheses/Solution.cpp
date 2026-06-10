1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string ans="";
5        int cnt=0;
6        for(char ch:s){
7            if(ch==')') cnt--;
8            if(cnt>0) ans+=ch;
9            if(ch=='(') cnt++;
10        }
11        return ans;
12        
13    }
14};