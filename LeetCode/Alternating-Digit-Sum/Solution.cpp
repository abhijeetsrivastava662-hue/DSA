1class Solution {
2public:
3    int alternateDigitSum(int n) {
4       string s=to_string(n);
5       int sign =-1;
6       int ans=s[0]-'0';
7       for(int i=1;i<s.size();i++){
8           int digit=s[i]-'0';
9           ans+=digit*sign;
10           sign*=-1;
11       } 
12       return ans;
13    }
14};