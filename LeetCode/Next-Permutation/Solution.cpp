1class Solution {
2public:
3    vector<int> nextPermutation(vector<int>& nums) {
4       int ind=-1;
5       int n=nums.size();
6       for(int i=n-2;i>=0;i--){
7        if(nums[i]<nums[i+1]){
8            ind=i;
9            break;
10        }
11       }
12        if(ind==-1){
13            reverse(nums.begin(),nums.end());
14            return nums;
15        }
16       
17       for(int i=n-1;i>=ind;i--){
18        if(nums[i]>nums[ind]){
19            swap(nums[i],nums[ind]);
20            break;
21        }
22        
23       }
24       reverse(nums.begin()+ind+1,nums.end());
25       return nums;
26        
27    }
28};