1class Solution {
2public:
3    int duplicateNumbersXOR(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        for(int num:nums){
6            mp[num]++;
7        }
8        int ans=0;
9        for(auto it:mp){
10            if(it.second==2){
11                ans ^= it.first;
12            }
13        }
14        return ans;
15    }
16};