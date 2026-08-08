1class Solution {
2public:
3    int characterReplacement(string s, int k) {
4        int l=0,maxfreq=0,ans=0;
5        vector<int> freq(26,0);
6        for(int r=0;r<s.size();r++){
7            freq[s[r]-'A']++;
8
9            maxfreq=max(maxfreq,freq[s[r]-'A']);
10
11            while((r-l+1-maxfreq)>k){
12                freq[s[l]-'A']--;
13                l++;
14            }
15            ans=max(ans,r-l+1);
16        }
17        return ans;
18        
19    }
20};