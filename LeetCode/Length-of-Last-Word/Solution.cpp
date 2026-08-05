1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4        int length =0;
5        int i = s.size()-1;
6        while(i>=0 && s[i]==' '){
7        i--;
8}
9        while(i>=0 && s[i]!=' '){
10        length ++;
11        i--;
12}
13        return length;
14    }
15};