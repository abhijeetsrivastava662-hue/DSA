1class Solution {
2public:
3    vector<int> concatWithReverse(vector<int>& nums) {
4        vector<int> ans;
5        for(int x:nums){
6        ans.push_back(x);
7        }
8        //reverse(nums.begin(),nums.end());
9        if(nums.empty()) return ans;
10        for(int i=nums.size()-1;i>=0;i--){
11        ans.push_back(nums[i]);
12        }
13        return ans;
14        
15    }
16};