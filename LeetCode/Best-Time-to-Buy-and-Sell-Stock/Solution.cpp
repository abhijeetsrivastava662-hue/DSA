1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int mini=prices[0];
5        int profit=0;
6        int n=prices.size();
7        for(int i=0;i<n;i++){
8            int cost = prices[i]-mini;
9            profit=max(profit,cost);
10            mini = min(mini,prices[i]);
11        }
12    return profit;
13        
14    }
15};