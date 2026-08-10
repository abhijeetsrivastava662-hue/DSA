1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxi=0;
5        for(string s:sentences){
6            int words=1;
7            for(char ch: s){
8            if(ch==' '){
9                words++;
10            }
11            }
12            maxi=max(maxi,words);
13        }
14        return maxi;
15    }
16};