1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int maxInd=0;
5        for(int i=0;i<nums.size();i++){
6            if(i>maxInd) return false;
7            maxInd=max(maxInd,i+nums[i]);
8        }
9        return true;
10        
11    }
12};