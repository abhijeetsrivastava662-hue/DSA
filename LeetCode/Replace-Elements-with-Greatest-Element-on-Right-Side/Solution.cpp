1class Solution {
2public:
3    vector<int> replaceElements(vector<int>& arr) {
4        int n=arr.size();
5        vector<int> ans(n);
6        ans[n-1]=-1;
7        int maxi=arr[n-1];
8        for(int i=n-2;i>=0;i--){
9            ans[i]=maxi;
10            maxi=max(maxi,arr[i]);
11        }
12        return ans;
13
14    }
15};