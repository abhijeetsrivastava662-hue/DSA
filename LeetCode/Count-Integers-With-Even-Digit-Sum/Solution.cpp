1class Solution {
2public:
3    int countEven(int num) {
4       int cnt=0;
5       for(int i=1;i<=num;i++){
6          int sum=0;
7          int temp=i;
8          while(temp){
9             sum+=temp%10;
10             temp/=10;
11          }   
12          if(sum%2==0) cnt++;
13       } 
14       return cnt;
15    }
16};