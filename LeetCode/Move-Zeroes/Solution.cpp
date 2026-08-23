1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int nonZero=0;
5        for(int j=0;j<nums.size();j++){
6            if(nums[j] != 0){
7                swap(nums[j],nums[nonZero]);
8                nonZero++;
9            }
10        }
11        
12    }
13};