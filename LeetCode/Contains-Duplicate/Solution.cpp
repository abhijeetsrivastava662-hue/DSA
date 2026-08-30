1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> st(nums.begin(),nums.end());
5        if(st.size()==nums.size()) return false;
6        else return true;
7        
8    }
9};