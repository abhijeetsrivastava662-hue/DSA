1class Solution {
2public:
3    void findCombination(int ind,int target,vector<int>& arr ,vector<vector<int>> &ans,vector<int> &ds){
4        if(target==0){
5            ans.push_back(ds);
6            return;
7        }
8        for(int i=ind;i<arr.size();i++){
9            if(i>ind && arr[i]==arr[i-1]) continue;
10            if(arr[i]>target) break;
11            ds.push_back(arr[i]);
12            findCombination(i+1,target-arr[i],arr,ans,ds);
13            ds.pop_back();
14        }
15    }
16public:
17    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
18        sort(candidates.begin(),candidates.end());
19        vector<vector<int>> ans;
20        vector<int> ds;
21        findCombination(0,target,candidates,ans,ds);
22        return ans;
23        
24    }
25};