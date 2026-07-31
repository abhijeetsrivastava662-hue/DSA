1class Solution {
2public:
3    int countPrimes(int n) {
4        vector<bool> prime(n,true);
5
6        if(n>0) prime[0] = false;
7        if(n>1) prime[1] = false;
8        for(int i=2;i*i<n;i++){
9            if(prime[i]){
10                for(int j=i*i;j<n;j+=i){
11                    prime[j]=false;
12                }
13            }
14        }
15        int count=0;
16        for(int i=2;i<n;i++){
17            if(prime[i]==1)
18            count++;
19        }
20        return count;
21        
22    }
23};