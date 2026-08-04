1class Solution {
2public:
3    vector<int> nextGreaterElements(vector<int>& nums) {
4       
5        stack<int> st;
6        int n=nums.size();
7         vector<int> ans(n,-1);
8
9        for(int i=2*n-1;i>=0;i--){
10            while(!st.empty() && st.top()<=nums[i%n]){
11                st.pop();
12            }
13            if(i<n){
14                if(st.empty()) ans[i]=-1;
15                else ans[i] = st.top();
16            }
17            st.push(nums[i%n]);
18        }
19        return ans;
20        
21    }
22};