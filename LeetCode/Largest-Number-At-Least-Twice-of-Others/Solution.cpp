1class Solution {
2public:
3    int dominantIndex(vector<int>& nums) {
4        int n=nums.size();
5        int maxi=0;
6        
7        for(int i=1;i<n;i++){
8            if(nums[i]>nums[maxi]){
9                maxi=i;
10            }
11        }
12        for(int i=0;i<n;i++){
13            if(i!=maxi && nums[maxi]<2*nums[i]){
14                return -1;
15            }
16        }
17        return maxi;
18    }
19};