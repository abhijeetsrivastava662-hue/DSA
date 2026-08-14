1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        map<int,int> mpp;
5        mpp[0]=1;
6        int preSum=0,cnt=0;
7        for(int i=0;i<nums.size();i++){
8            preSum += nums[i];
9            int remove = preSum - k;
10            cnt += mpp[remove];
11            mpp[preSum] += 1;
12
13        }
14        return cnt;
15        
16    }
17};