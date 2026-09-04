1class Solution {
2public:
3    int maximumDifference(vector<int>& nums) {
4        int n=nums.size();
5        int maxi=0;
6        for(int i=0;i<n;i++){
7            for(int j=i+1;j<n;j++){
8                int diff = nums[j]-nums[i];
9                maxi =max(maxi,diff);
10            }
11        }
12        return maxi!=0 ? maxi : -1;
13    }
14};