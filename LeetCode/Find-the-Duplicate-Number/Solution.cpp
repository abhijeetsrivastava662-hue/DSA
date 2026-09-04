1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        int ans=0;
6        for(int num:nums){
7            mp[num]++;
8        }
9        for(auto it:mp){
10            if(it.second>=2) ans=it.first; 
11        }
12        return ans;
13    }
14};