1class Solution {
2public:
3    vector<int> numberOfPairs(vector<int>& nums) {
4        if(nums.size()==1) return {0,1};
5        unordered_map<int,int> freq;
6        for(int i=0;i<nums.size();i++){
7            freq[nums[i]]++;
8        }
9        int cnt=0;
10        int pair=0;
11        int left=0;
12        for(auto it : freq){
13            if(it.second%2==0)
14            pair+=it.second/2;
15            else
16           pair+=it.second/2;
17            left+=it.second%2; 
18        }
19        return{pair,left};
20    }
21};