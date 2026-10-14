1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5        int ans=0;
6        for(string x:tokens){
7
8            if(x!="+" && x!="-" && x!="*" && x!="/"){
9                st.push(stoi(x));
10            }else{
11                int b=st.top();
12                st.pop();
13                int a=st.top();
14                st.pop();
15                if(x=="+"){
16                    st.push(a+b);
17                }else if(x=="-"){
18                    st.push(a-b);
19                }else if(x=="*"){
20                    st.push(a*b);
21                }else{
22                    st.push(a/b);
23                }
24            }
25        }
26        return st.top();
27    }
28};
29