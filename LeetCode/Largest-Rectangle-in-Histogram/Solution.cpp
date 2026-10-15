1class Solution {
2public:
3    int largestRectangleArea(vector<int>& heights) {
4        int n=heights.size();
5        stack<int> st;
6        int ans=0;
7        for(int i=0;i<=n;i++){
8            //i==n isliye likha kuki if stack full nhi hua toh imaginary iteration hoga phirse jab tak khali na jaye stack
9            //if st.top() is greater it means we got new smaller number which will not encounter further
10            while(!st.empty() && (i==n||heights[st.top()]>heights[i])){
11                int length=heights[st.top()];
12                st.pop();
13                int left=st.empty() ? -1 : st.top();//previous nearest smaller no.
14                int right=i;//next nearest smaller no.
15                int width=right-left-1;
16                ans=max(ans,length*width);
17            }
18            st.push(i);
19        }
20        return ans;
21    }
22};
23