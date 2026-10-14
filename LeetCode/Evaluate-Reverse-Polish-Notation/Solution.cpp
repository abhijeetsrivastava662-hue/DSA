1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5        for(string x:tokens){
6
7            if(x!="+" && x!="-" && x!="*" && x!="/"){
8                st.push(stoi(x));
9            }else{
10                int b=st.top();
11                st.pop();
12                int a=st.top();
13                st.pop();
14                if(x=="+"){
15                    st.push(a+b);
16                }else if(x=="-"){
17                    st.push(a-b);
18                }else if(x=="*"){
19                    st.push(a*b);
20                }else{
21                    st.push(a/b);
22                }
23            }
24        }
25        return st.top();
26    }
27};
28