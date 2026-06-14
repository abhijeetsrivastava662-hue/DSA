1class Solution {
2public:
3    int romanToInt(string s) {
4
5        unordered_map<char,int> mp={
6            {'I',1},{'V',5},{'X',10},
7            {'L',50},{'C',100},{'D',500},
8            {'M',1000}
9        };
10
11        int ans=0;
12
13        for(int i=0;i<s.size();i++){
14            if(i+1<s.size() && mp[s[i]]<mp[s[i+1]]){
15                ans-=mp[s[i]];
16            }else{
17                ans+=mp[s[i]];
18            }
19        }
20        return ans;
21        
22    }
23};