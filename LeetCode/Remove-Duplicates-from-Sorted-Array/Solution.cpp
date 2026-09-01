1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int j=1;
5        int n=nums.size();
6        for(int i=1;i<n;i++){
7            if(nums[i]!=nums[j-1]){
8                nums[j]=nums[i];
9                j++;
10            }
11        }
12        return j;
13    }
14};