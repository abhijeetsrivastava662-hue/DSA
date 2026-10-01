1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        for(char ch: s){
6            if(ch=='(' || ch=='{' || ch=='['){
7                st.push(ch);
8            }else{
9                if(st.empty()) return false;
10
11                 if((ch==')' && st.top()=='(') || (ch=='}' && st.top()=='{') || (ch==']' && st.top()=='[')){
12                st.pop();
13                }else{
14                    return false;
15                }
16            }
17        }
18        return st.empty();
19    }
20};