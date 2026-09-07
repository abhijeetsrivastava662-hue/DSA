1class Solution {
2public:
3    int commonFactors(int a, int b) {
4        int ans=0;
5        int n=gcd(a,b);
6        for(int i=1;i<=n;i++){
7            if(a%i==0 && b%i==0){
8                ans++;
9            }
10        }
11        return ans;
12    }
13};