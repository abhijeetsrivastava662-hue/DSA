1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if(s.size()!=goal.size()){
5            return false;
6        }
7        string doubled = s+s;
8
9        return doubled.find(goal) != string::npos;
10        
11    }
12};