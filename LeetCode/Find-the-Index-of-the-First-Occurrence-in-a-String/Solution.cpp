1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int n=haystack.size();
5        int m=needle.size();
6        if(m==0) return 0;
7        if(n<m) return -1;
8        for(int i=0;i<n;i++){
9            if(haystack[i]==needle[0]){
10                if(haystack.substr(i,m)==needle){
11                    return i;
12                }
13            }
14        }
15        return -1;
16        
17    }
18};