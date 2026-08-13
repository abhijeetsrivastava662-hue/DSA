1class Solution {
2public:
3    int mySqrt(int x) {
4        int l=1;
5        int h=x;
6        while(l<=h){
7            long long mid=l+(h-l)/2;
8            
9            if(mid*mid==x) return mid;
10            else if(mid*mid>x) h=mid-1;
11            else l=mid+1;
12        }
13        return h ;
14    }
15};