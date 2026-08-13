1class Solution {
2public:
3    int findMiddleIndex(vector<int>& nums) {
4     int total = accumulate(nums.begin(),nums.end(),0);
5        int lTotal=0;
6        for(int i=0;i<nums.size();i++){
7            int rTotal=total-lTotal-nums[i];
8            if(rTotal==lTotal){
9                return i;
10            }
11            lTotal+=nums[i];
12        }
13        return -1;   
14    }
15};