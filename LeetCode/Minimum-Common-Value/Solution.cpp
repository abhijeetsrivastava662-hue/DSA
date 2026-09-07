1class Solution {
2public:
3    int getCommon(vector<int>& nums1, vector<int>& nums2) {
4        int i=0,j=0;
5
6        while(i<nums1.size() && j<nums2.size()){
7            if(nums1[i]==nums2[j]){
8                return nums1[i];
9            }
10            else if(nums1[i]<nums2[j]){
11                i++;
12            }else {
13                j++;
14            }
15        }
16        return -1;
17    }
18};