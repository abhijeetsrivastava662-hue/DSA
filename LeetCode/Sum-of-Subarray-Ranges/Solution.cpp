1class Solution {
2public:
3    long long subArrayRanges(vector<int>& nums) {
4        int n=nums.size();
5        stack<int> st;
6        vector<int> prevSmaller(n),nextSmaller(n);
7        vector<int> prevGreater(n),nextGreater(n);
8        
9        //prev small
10        for(int i=0;i<n;i++){
11           while(!st.empty() && nums[st.top()]>nums[i])
12           st.pop();
13           prevSmaller[i]=st.empty() ? -1 : st.top();
14           st.push(i); 
15        }
16        
17        while(!st.empty()) st.pop();
18        
19        //next small
20        for(int i=n-1;i>=0;i--){
21           while(!st.empty() && nums[st.top()]>=nums[i])
22           st.pop();
23           nextSmaller[i]=st.empty() ? n : st.top();
24           st.push(i); 
25        }
26        
27        while(!st.empty()) st.pop();
28
29        //prev greater
30        for(int i=0;i<n;i++){
31        while(!st.empty() && nums[st.top()]<nums[i])
32           st.pop();
33           prevGreater[i]=st.empty() ? -1 : st.top();
34           st.push(i);
35        }
36
37         while(!st.empty()) st.pop();
38
39        //next greater
40        for(int i=n-1;i>=0;i--){
41        while(!st.empty() && nums[st.top()]<=nums[i])
42           st.pop();
43           nextGreater[i]=st.empty() ? n : st.top();
44           st.push(i);
45        }
46
47        long long minSum=0;
48        long long maxSum=0;
49
50        for(int i=0;i<n;i++){
51            long long left=i-prevSmaller[i];
52            long long right=nextSmaller[i]-i;
53
54            minSum += 1LL * nums[i] * left * right;
55            left=i-prevGreater[i];
56            right=nextGreater[i]-i;
57            maxSum += 1LL * nums[i] * left * right;
58        }
59        return maxSum-minSum;
60
61
62    }
63};