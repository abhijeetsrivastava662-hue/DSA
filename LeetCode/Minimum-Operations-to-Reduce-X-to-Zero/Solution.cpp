1class Solution {
2public:
3    int minOperations(vector<int>& nums, int x) {
4        int totalSum=accumulate(nums.begin(),nums.end(),0);
5        int target=totalSum-x;
6
7        if(target<0) return -1;
8        if(target==0) return nums.size();
9        int l=0,r=0;
10        int n=nums.size();
11        int currSum=0;
12        int minOper=INT_MAX;
13        while(r<n){
14            currSum+=nums[r];
15            r++;
16            while(currSum>target && l<n){
17                currSum-=nums[l];
18                l++;
19            }
20            if(currSum==target){
21                minOper=min(minOper,n-(r-l));
22            }
23        }
24        return (minOper==INT_MAX) ? -1 : minOper;
25    }
26};