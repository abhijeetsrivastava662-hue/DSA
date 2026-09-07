1class Solution {
2public:
3    vector<vector<int>> findPrimePairs(int n) {
4        vector<vector<int>> ans;
5
6        //Sieve of Eratosthenes
7        vector<bool> isPrime(n + 1, true);
8
9        if (n >= 0) isPrime[0] = false;
10        if (n >= 1) isPrime[1] = false;
11
12        for (int i = 2; i * i <= n; i++) {
13            if (isPrime[i]) {
14                for (int j = i * i; j <= n; j += i) {
15                    isPrime[j] = false;
16                }
17            }
18        }
19
20        for (int i = 2; i <= n / 2; i++) {
21            if (isPrime[i] && isPrime[n - i]) {
22                ans.push_back({i, n - i});
23            }
24        }
25        return ans;
26    }
27};