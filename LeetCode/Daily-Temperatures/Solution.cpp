1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temp) {
4        stack<pair<int,int>> st;
5        int n=temp.size();
6        vector<int> ans(n);
7        for(int i=n-1;i>=0;i--){
8            while(!st.empty() && st.top().first<=temp[i]){
9                st.pop();
10            }
11            if(st.empty()){
12                ans[i]=0;
13            }else{
14                ans[i]=st.top().second-i;
15            }
16            st.push({temp[i],i});
17        }
18        return ans;
19    }
20};
21