1class Solution {
2public:
3    int smallestIndex(vector<int>& nums) {
4        int n=nums.size();
5        for(int i=0;i<n;i++){
6            int temp=nums[i];
7            int ans=0;
8            while(temp){
9               ans+=temp%10;
10               temp=temp/10;
11            }
12            if(ans==i) return i;
13        }
14        return -1;
15    }
16};