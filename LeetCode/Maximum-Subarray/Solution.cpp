1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int sum=0, maxi= INT_MIN;
5        for(int i=0;i<nums.size();i++){
6            sum += nums[i];
7            if(sum>maxi){
8                maxi=sum;
9            }
10            if(sum<0){
11                sum=0;
12            }
13        }
14        return maxi;
15        
16    }
17};