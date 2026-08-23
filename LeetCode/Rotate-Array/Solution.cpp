1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n=nums.size();
5        vector<int> temp(n);
6        for(int i=0;i<n;i++){
7            temp[(i+k)%n]=nums[i];
8        }
9        nums=temp;
10        
11    }
12};