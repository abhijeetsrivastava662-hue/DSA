1class Solution {
2public:
3    bool canAliceWin(vector<int>& nums) {
4        int n=nums.size();
5        int singDig=0;
6        int doubDig=0;
7        for(int i=0;i<n;i++){
8            if(nums[i]>9){
9                doubDig+=nums[i];
10            }else{
11                singDig+=nums[i];
12            }
13        }
14        return (singDig==doubDig) ? false : true;
15    }
16};