class Solution {
public:
int mod=1e9+7;
    int numberOfWays(int n, int x) {
        int i=1;
        vector<int> powers;
        while(1){
            long long p=1;
            for(int k=0;k<x;k++)p*=i;
            if(p>n)break;
            i++;
            powers.push_back((int)p); 

        }
        vector<long long> dp(n+1,0);
        dp[0]=1;
        for(int p:powers){
            for(int s=n;s>=p;s--){
                dp[s]=(dp[s]+dp[s-p])%mod;
            }
        }
        return dp[n];
    }
};