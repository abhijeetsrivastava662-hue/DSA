1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int n= nums.size();
5        if(n==1) return nums[0];
6        if(nums[0]!=nums[1]) return nums[0];
7        if(nums[n-1]!=nums[n-2]) return nums[n-1];
8        int low=1,high = n-2;
9        while(low<=high){
10            int mid=low+(high-low)/2;
11            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
12            else //standing on left half
13            if((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1]))
14            {   // eliminate left half
15                low=mid+1;
16            }else //standing on left half 
17            {   // eliminate right half
18                high=mid-1;
19            }
20        }
21        return -1;
22    }
23};