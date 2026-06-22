1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        map<int,int> mp;
5        int n=nums.size();
6        for(int i=0;i<n;i++){
7            int num =nums[i];
8            int more = target -num;
9            if(mp.find(more)!=mp.end()){
10                return {mp[more],i};
11            }
12           mp[num]=i;
13        }
14        return {-1,-1};
15        
16    }
17};