1class Solution {
2public:
3    bool checkDivisibility(int n) {
4        int temp=n;
5        int sum=0;
6        int product=1;
7        while(n){
8            sum+=n%10;
9            product*=n%10;
10            n/=10;
11        }
12        if(temp%(sum+product)==0) return true;
13        else return false;
14    }
15};