1class Solution {
2public:
3    bool isValid(string s) {
4        stack<int> st;
5        for(int i=0;i<s.size();i++){
6            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
7                st.push(s[i]);
8            }else {
9                if(st.empty()){ return false;}
10            char ch=st.top();
11            
12            if((s[i]==')' && ch=='(') || (s[i]=='}' && ch=='{') || (s[i]==']' && ch=='['))
13            st.pop();
14            else return false;
15            }
16        }
17        return st.empty();
18    }
19};