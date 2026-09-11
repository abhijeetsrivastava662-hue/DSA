1class Solution {
2public:
3    int buyChoco(vector<int>& prices, int money) {
4        sort(prices.begin(),prices.end());
5        int ans=money;
6        ans-=prices[0];
7        ans-=prices[1];
8        if(ans>=0) return ans;
9        else return money;
10    }
11};