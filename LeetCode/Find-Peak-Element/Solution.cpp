1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n=nums.size();
5        if(n==1) return 0;
6        if(nums[0]>nums[1]) return 0;//first element can be peak after satisfying this condition
7        if(nums[n-1]>nums[n-2]) return n-1;// last element can be peak after satisfying this condition
8        int low=1,high=n-2;
9        while(low<=high){
10            int mid=low+(high-low)/2;
11            //mid is the peak
12            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
13            else if(nums[mid]>nums[mid-1])//elements is linearly increasing
14            {
15                low=mid+1;
16            }else//elements is linearly decreasing and also works if mid comes opposite of peak
17            {
18                high=mid-1;
19            }
20        }
21        return -1;
22    }
23};