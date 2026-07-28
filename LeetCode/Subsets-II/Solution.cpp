1class Solution {
2private:
3    void findSubSets(int ind,vector<int> &nums,vector<int> &ds, vector<vector<int>> &ans){
4        ans.push_back(ds);
5        for(int i=ind;i<nums.size();i++){
6            if(i!=ind && nums[i]==nums[i-1]) continue;
7            ds.push_back(nums[i]);
8            findSubSets(i+1,nums,ds,ans);
9            ds.pop_back();
10        }
11    }
12public:
13    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
14        vector<vector<int>> ans;
15        vector<int> ds;
16        sort(nums.begin(),nums.end());
17        findSubSets(0,nums,ds,ans);
18        return ans;
19        
20    }
21};