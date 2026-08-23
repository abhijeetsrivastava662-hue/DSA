1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4        int n=nums.size();
5        int i=0,j=n-1;
6        vector<int> ans(n);
7        for(int k=0;k<n;k++){
8            if(nums[k]%2==0){
9                ans[i]=nums[k];
10                i++;
11            }else {
12                ans[j]=nums[k];
13                j--;
14            }
15        }
16        nums=ans;
17        return ans;
18    }
19};