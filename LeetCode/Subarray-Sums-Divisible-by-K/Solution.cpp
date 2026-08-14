1class Solution {
2public:
3    int subarraysDivByK(vector<int>& nums, int k) {
4        int ans=0;
5        int sum=0;
6        unordered_map<int,int> mp;
7        mp[0]=1;
8        for(int num:nums){
9            sum+=num;
10            int rem=((sum%k)+k)%k;
11            if(mp.count(rem)){
12                ans+=mp[rem];
13                mp[rem]++;
14            }
15            else{
16                mp[rem]++;
17            }
18        }
19        return ans;
20
21    }
22};