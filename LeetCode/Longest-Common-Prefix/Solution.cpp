1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        sort(strs.begin(),strs.end());
5        string ans="";
6        string first= strs[0];
7        string last= strs[strs.size()-1];
8        for(int i=0;i<first.size();i++){
9            if(first[i]!=last[i]) break;
10            else ans+=first[i];
11        }
12        return ans;
13        
14        
15    }
16};