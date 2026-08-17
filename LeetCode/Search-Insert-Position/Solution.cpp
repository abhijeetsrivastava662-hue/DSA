1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int low=0;
5        int high=nums.size()-1;
6        int ans = nums.size();
7        while(low<=high){
8            int mid=( low + high ) / 2;
9            if(nums[mid]>=target) {
10            ans=mid;
11            high=mid-1;
12            }else{ 
13            low = mid+1;
14            }
15        }
16    
17        return ans;
18        
19    }
20};