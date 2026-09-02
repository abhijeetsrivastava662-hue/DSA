1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int l=0;
5        int minlen=INT_MAX;
6        int currSum=0;
7        for(int r=0;r<nums.size();r++){
8            currSum+=nums[r];
9            while(currSum>=target){
10                if(r-l+1<minlen){
11                    minlen=r-l+1;
12                }
13                currSum-=nums[l];
14                l++;
15            }
16        }
17        return minlen != INT_MAX ? minlen : 0;
18        
19    }
20};