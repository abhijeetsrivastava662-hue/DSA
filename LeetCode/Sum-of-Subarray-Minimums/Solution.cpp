1class Solution {
2public:
3    int sumSubarrayMins(vector<int>& arr) {
4        // extract element's previous smaller elememt and next smaller element and multiply there index to find  total subarray and that element is the min only 
5        int n=arr.size();
6        stack<int> st;
7        vector<int> prev(n),next(n);
8        const int MOD=1e9+7;
9
10        //previous smaller element
11        for(int i=0;i<n;i++){
12            while(!st.empty() && arr[st.top()]>arr[i]){
13                st.pop();
14            }
15            if(st.empty()) prev[i]=-1;
16            else prev[i]=st.top();
17
18            st.push(i);
19        }
20        while(!st.empty()) st.pop();
21
22//next smaller
23        for(int i=n-1;i>=0;i--){
24            while(!st.empty() && arr[st.top()]>=arr[i]){
25                st.pop();
26            }
27            if(st.empty()) next[i]=n;
28            else next[i]=st.top();
29
30            st.push(i);
31        }
32        long long ans=0;
33        for(int i=0;i<n;i++){
34            long long left=i-prev[i];
35            long long right=next[i]-i;
36
37            ans=(ans+(arr[i]*left % MOD)*right)% MOD;
38        }
39        return ans;
40
41        
42    }
43};