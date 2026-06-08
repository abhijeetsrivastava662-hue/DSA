1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        std::unordered_map<char,int> ma;
5        std::unordered_map<char,int> mb;
6
7        for(const auto&el: s){
8            ma[el]++;
9        }
10        for(const auto&el: t){
11            mb[el]++;
12        }
13        return ma==mb;
14        
15    }
16};