1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> ans(2);
6        vector<int> freq(n+1,0);
7        for(int num:nums){
8            freq[num]++;
9        }
10
11        for(int i=1;i<=n;i++){
12            if(freq[i]==2){
13                ans[0]=i;
14            }else if(freq[i]==0){
15                ans[1]=i;
16            }
17        }
18        return ans;
19        
20    }
21};