1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4        int preSum=0;
5        int n=nums.size();
6        unordered_map<int,int> firstOcc;
7        firstOcc[0]=0;
8        for(int i=0;i<n;i++){
9            preSum=(preSum+nums[i])%k;
10            if(firstOcc.find(preSum)!=firstOcc.end()){
11                if(i+1 - firstOcc[preSum]>=2) return true;
12            }else{
13                firstOcc[preSum]=i+1;
14            }
15        }
16        return false;
17    }
18};