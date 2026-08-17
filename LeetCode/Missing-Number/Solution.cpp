1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int xor1=0;
5        int xor2=0;
6        int n=nums.size();
7        for(int i=0;i<n;i++){
8            xor1^=nums[i];
9            xor2^=i;
10        }
11        xor2^=n;
12        return xor1^xor2;
13    }
14};