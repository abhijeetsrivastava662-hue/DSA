1class Solution {
2public:
3    long long countCommas(long long n) {
4        long long start=1000;
5        long long ans=0;
6        while(start<=n){
7            ans += n-start+1;
8            start*=1000;
9        }
10        return ans;
11    }
12};