1class Solution {
2public:
3    vector<int> concatWithReverse(vector<int>& nums) {
4        vector<int> ans;
5        for(int x:nums){
6        ans.push_back(x);
7        }
8        reverse(nums.begin(),nums.end());
9        for(int x:nums){
10        ans.push_back(x);
11        }
12        return ans;
13        
14    }
15};