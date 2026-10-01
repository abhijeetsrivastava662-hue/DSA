1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int n=nums.size();
5        unordered_map<int,int> mpp;
6        for(int x:nums){
7            mpp[x]++;
8        }
9        for(auto it:mpp){
10            if(it.second>n/2) return it.first;
11        }
12        return 0;
13    }
14};