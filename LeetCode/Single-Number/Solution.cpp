1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int XOR=0;
5        for(int i=0;i<nums.size();i++){
6            XOR=XOR^nums[i];
7        }
8        return XOR;
9        
10    }
11};