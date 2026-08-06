1class Solution {
2public:
3    int smallestNumber(int n, int t) {
4        while(true){
5            int dp=1;
6            int temp=n;
7            while(temp>0){
8                dp*=(temp%10);
9                temp=temp/10;
10            }
11            if(dp%t==0){
12                return n;
13            }
14            n++;
15        }
16        return false;
17    }
18};