1class Solution {
2public:
3    int minAddToMakeValid(string s) {
4        int ans=0;
5        stack<int> st;
6        for(char ch: s){
7            if(ch=='('){
8                st.push(ch);
9            }else{
10                if(!st.empty() && st.top()=='('){
11                    st.pop();
12                }else{
13                    ans++;
14                }
15            }
16        }
17        return (st.empty()) ? ans : ans+st.size();
18    }
19};