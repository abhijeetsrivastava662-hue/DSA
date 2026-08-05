1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int n=nums.size();
5        int k=0;
6        for(int i=0;i<n;i++){
7           if(nums[i]!=val){
8            nums[k]=nums[i];
9            k++;
10           }
11        }
12        return k;
13        
14    }
15};