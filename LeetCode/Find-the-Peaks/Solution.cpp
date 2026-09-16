1class Solution {
2public:
3    vector<int> findPeaks(vector<int>& mon) {
4        int n=mon.size();
5        if(n==1) return {};
6        vector<int> ans;
7        
8        for(int i=1;i<n-1;i++){
9           if(mon[i]>mon[i-1] && mon[i]>mon[i+1]){
10            ans.push_back(i);
11           }
12        }
13        return ans;         
14    }
15};