1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int n=nums.size();
5        if(n==1) return nums[0];
6        if(nums[0]!=nums[1]) return nums[0];
7        if(nums[n-1]!=nums[n-2]) return nums[n-1];
8        int low=0;
9        int high=n-2;
10        while(low<=high){
11            int mid=low+(high-low)/2;
12            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
13                return nums[mid];
14            }else if((mid%2==1 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1])){
15                low=mid+1;
16            }else{
17                high=mid-1;
18            }
19        }
20        return -1;
21    }
22};