1class Solution {
2public:
3    int minBitFlips(int start, int goal) {
4        int ans =start^goal;
5        int cnt=0;
6        for(int i=0;i<31;i++){
7            if(ans & (1<<i))
8            cnt++;
9        }
10        return cnt;
11        
12    }
13};