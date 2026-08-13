1class Solution {
2public:
3    bool judgeSquareSum(int c) {
4        long long f=0;
5        long long s=sqrt(c);
6        while(f<=s){
7            long long sum=f*f + s*s;
8            if(sum==c) return true;
9            else if(sum<c) f++;
10            else s--;
11        }
12        return false;
13    }
14};