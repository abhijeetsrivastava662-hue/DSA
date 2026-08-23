1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        vector<int> temp(nums.size());
5
6        for(int i=0;i<nums.size();i++){
7            temp[(i+k)%nums.size()] = nums[i];
8        }
9        nums= temp;
10    }
11};