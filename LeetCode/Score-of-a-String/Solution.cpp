1class Solution {
2public:
3    int scoreOfString(string s) {
4        int ans=0;
5        for(int i=0;i<s.size()-1;i++){
6            ans+=abs(s[i]-s[i+1]);
7        }
8        return ans;
9    }
10};