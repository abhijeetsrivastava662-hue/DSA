1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4        vector<int> less,more,ans;
5        int piv=0;
6        int n=nums.size();
7        for(int i=0;i<n;i++){
8            if(nums[i]<pivot){
9                less.push_back(nums[i]);
10            }else if(nums[i]>pivot){
11                more.push_back(nums[i]);
12            }else{
13                piv++;
14            }
15        }
16        for(int x:less){
17            ans.push_back(x);
18        }
19        while(piv){
20            ans.push_back(pivot);
21            piv--;
22        }
23        for(int x:more){
24            ans.push_back(x);
25        }
26        
27        return ans;
28    }
29};