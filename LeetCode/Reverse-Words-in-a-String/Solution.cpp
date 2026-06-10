1class Solution {
2public:
3string reverseWords(string& s) {
4    reverse(s.begin(),s.end());
5    int n= s.size(),i=0;
6    string ans = "";
7    for(int i=0;i<n;i++){
8        while(i<n && s[i]==' ')i++;
9        if(i==n) break;
10        string word="";
11        
12        while(i<n && s[i]!=' ') {
13            word+=s[i++];
14        }
15    reverse(word.begin(),word.end());
16    if(ans.size()>0) ans+=" "+word;
17    else ans+=word;
18    }
19    return ans;
20    
21}
22};
23