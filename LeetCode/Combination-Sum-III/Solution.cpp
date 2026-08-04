1class Solution {
2private:
3    void findSubsets(int start,int k , int target,vector<int> &ds,vector<vector<int>> &ans){
4        //base case
5        if(target==0 && ds.size()==k){
6            ans.push_back(ds);
7            return;
8        }
9        // if size > k  size is exceeding it returns from where it
10        //if size==k it depends if target==0 then store in ans
11        if(ds.size()>=k){
12            return;
13        }
14        for(int i=start;i<=9;i++){
15            if(i>target){
16                break;
17            }
18            ds.push_back(i);
19            findSubsets(i+1,k,target-i,ds,ans);
20            ds.pop_back();
21        }
22    }
23public:
24    vector<vector<int>> combinationSum3(int k, int target) {
25        vector<vector<int>> ans;
26        vector<int> ds;
27
28        findSubsets(1,k,target,ds,ans);
29        return ans;
30        
31    }
32};