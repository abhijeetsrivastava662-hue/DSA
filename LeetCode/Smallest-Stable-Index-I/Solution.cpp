1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n=nums.size();
5        vector<int> suffix(n,0);
6        int mini=INT_MAX;
7        for(int i=n-1;i>=0;i--){
8            mini=min(mini,nums[i]);
9            suffix[i]=mini;
10        }
11        int maxi=0;
12        for(int i=0;i<n;i++){
13            maxi=max(maxi,nums[i]);
14            int score= maxi-suffix[i];
15            if(score<=k) return i;
16        }
17        return -1;
18    }
19};