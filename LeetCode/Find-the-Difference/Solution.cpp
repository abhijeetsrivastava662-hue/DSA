1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        unordered_map<char,int> mp;
5        for(char ch:s){
6            mp[ch]++;
7        }
8        for(char ch:t){
9            mp[ch]--;
10            if(mp[ch]<0){
11                return ch;
12            }
13        }
14        return ' ';
15    }
16};