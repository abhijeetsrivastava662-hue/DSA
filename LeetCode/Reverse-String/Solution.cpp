1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int start=0, end=s.size()-1;
5        while(start<=end){
6            swap(s[start],s[end]);
7            start++;
8            end--;
9        }
10    }
11};