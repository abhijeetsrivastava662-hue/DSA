1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        unordered_map<int,int> mp;
5        for(int num:nums){
6            mp[num]++;
7        }
8        for(auto it:mp){
9            if(it.second==1){
10                return it.first;
11            }
12        }
13        return -1;
14    }
15};