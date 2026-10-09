1class Solution {
2public:
3    int minInsertions(string s) {
4        stack<int> st;
5        int ans=0;
6        for(int i=0;i<s.size();i++){
7            if(s[i]=='('){
8                st.push(s[i]);
9            }else if(s[i]==')'&&s[i+1]==s[i]){
10                if(!st.empty()){
11                st.pop();
12                }else{
13                    ans+=1;
14                }
15                i++;
16            }else if(st.empty()){
17                ans+=2;
18                }else{
19                st.pop();
20                ans+=1;
21            }
22        }
23        return st.empty() ? ans : ans+2*st.size();
24    }
25};