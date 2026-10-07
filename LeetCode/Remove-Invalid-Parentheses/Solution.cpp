1class Solution {
2public:
3    vector<string> ans;
4    void bt(string s,int start,int open,int close){
5        //agar valid string ho tabhi push hoga
6        if(open==0 && close==0){
7            if(isValid(s)) ans.push_back(s);
8            return;
9        }
10
11        for(int i=start;i<s.size();i++){
12            if(i>start && s[i]==s[i-1]) continue;
13            //close wale ko hatane ki koshish karenge
14            if(close>0 && s[i]==')')
15            bt(s.substr(0,i)+s.substr(i+1),i,open,close-1);
16            else if(open>0 && s[i]=='(')
17            bt(s.substr(0,i)+s.substr(i+1),i,open-1,close);
18        }
19    }
20    bool isValid(string s){
21        int count=0;
22        for(char c: s){
23            if(c=='('){
24                count++;
25            }else if(c==')'){
26                count--;
27            }
28            if(count<0) return false;
29        }
30        return count==0;
31    }
32    vector<string> removeInvalidParentheses(string s) {
33        ans.clear();
34        int open=0,close=0;
35        for(char c:s){
36            if(c=='('){
37                open++;
38            }else if(c==')'){
39                if(open) open--;
40                else close++;
41            }
42        }
43        bt(s,0,open,close);
44        return ans;
45    }
46};