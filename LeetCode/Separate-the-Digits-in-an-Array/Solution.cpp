1class Solution {
2public:
3    vector<int> separateDigits(vector<int>& nums) {
4        vector<int> ans;
5        int n=nums.size();
6        for(int i=n-1;i>=0;i--){
7            int temp=nums[i];
8            while(temp){
9                ans.push_back(temp%10);
10                temp/=10;
11            }
12        }
13        reverse(ans.begin(),ans.end());
14        return ans;
15    }
16};