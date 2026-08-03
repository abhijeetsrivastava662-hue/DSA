1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4        int sum=0;
5        for(int i=0;i<nums.size();i++){
6            sum+=nums[i];
7        }
8        return sum%k;
9    }
10};