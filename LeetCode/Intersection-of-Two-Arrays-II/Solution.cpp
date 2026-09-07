1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4       unordered_map<int,int> mp;
5       for(int i=0;i<nums1.size();i++){
6           mp[nums1[i]]++;
7       }
8       vector<int> ans;
9
10       for(int num:nums2){
11          if(mp.count(num) && mp[num]>0){
12            ans.push_back(num);
13            mp[num]--;
14          }
15       } 
16       return ans;
17    }
18};