1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int maxi=INT_MIN;
5        int suf = 1;
6        int pre = 1;
7        for(int i=0;i<nums.size();i++){
8            if(suf==0) suf=1;
9            if(pre==0) pre=1;
10            pre = pre * nums[i];
11            suf = suf * nums[nums.size()-1-i];
12            maxi = max(maxi,max(pre,suf));
13        }
14        return maxi;
15        
16    }
17};