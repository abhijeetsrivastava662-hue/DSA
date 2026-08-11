1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int product=1;
5        int sum=0;
6        while(n){
7            int digit=n%10;
8            product *= digit;
9            sum += digit;
10            n/=10;
11        }
12        return (product-sum);
13    }
14};