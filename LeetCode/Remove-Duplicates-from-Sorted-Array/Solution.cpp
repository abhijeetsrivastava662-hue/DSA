1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int i=0;
5        int n=nums.size();
6        for(int j=1;j<n;j++){
7            if(nums[j]!=nums[i]){
8                nums[i+1]=nums[j];
9                i++;
10            }
11        }
12        return i+1;
13    }
14};