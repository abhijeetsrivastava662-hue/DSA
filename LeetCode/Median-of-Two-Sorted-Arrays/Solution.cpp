1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        int n1=nums1.size();
5        int n2=nums2.size();
6        if(n1>n2) return findMedianSortedArrays(nums2,nums1);
7        int low=0,high=n1;
8        int left=(n1+n2+1)/2;
9        int n=n1+n2;
10        while(low<=high){
11            int mid1 = low+(high-low)/2;
12            int mid2 = left - mid1;
13            int l1=INT_MIN, l2=INT_MIN;
14            int r1=INT_MAX, r2=INT_MAX;
15            if(mid1<n1) r1=nums1[mid1];
16            if(mid2<n2) r2=nums2[mid2];
17            if(mid1-1>=0) l1=nums1[mid1-1];
18            if(mid2-1>=0) l2=nums2[mid2-1];
19            if(l1<=r2 && l2<=r1){
20                if(n%2==1) return max(l1,l2);
21                else return (double)(max(l1,l2)+min(r1,r2))/2.0;
22            } else if(l1>r2) high=mid1-1;
23            else low= mid1+1;  
24        }
25        return 0;
26    }
27};