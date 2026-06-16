1class Solution {
2public:
3    int beautySum(string s) {
4        
5        int ans=0;
6        int n=s.size();
7        for(int i=0;i<n;i++){
8            vector<int> freq(26,0);
9            for(int j=i;j<n;j++){
10                freq[s[j]-'a']++;
11                int mn=INT_MAX,mx=0;
12                for(int f : freq){
13                    if(f>0){
14                    mn=min(mn,f);
15                    mx=max(mx,f);
16                    }
17                }
18                 ans += (mx-mn);
19            }
20           
21        }
22        return ans;
23    }
24};