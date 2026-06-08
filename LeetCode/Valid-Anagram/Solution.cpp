1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.size() != t.size()) return false;
5
6        unordered_map<char, int> mp;
7
8        for(char c : s) mp[c]++;
9        for(char c : t) {
10            if(--mp[c] < 0) return false;
11        }
12
13        return true;
14    }
15};