1class Solution {
2private:
3    void swapIfGreater(vector<int>& nums1, int ind1, vector<int>& nums2, int ind2){
4        if(nums1[ind1] > nums2[ind2]){
5            swap(nums1[ind1], nums2[ind2]);
6        }
7    }    
8
9public:
10    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
11        int len = n + m;
12        int gap = (len / 2) + (len % 2);
13
14        while (gap > 0) {
15            int left = 0;
16            int right = left + gap;
17
18            while (right < len) {
19
20                // Case 1: both in nums1
21                if (right < n) {
22                    swapIfGreater(nums1, left, nums1, right);
23                }
24                // Case 2: left in nums1, right in nums2
25                else if (left < n && right >= n) {
26                    swapIfGreater(nums1, left, nums2, right - n);
27                }
28                // Case 3: both in nums2
29                else {
30                    swapIfGreater(nums2, left - n, nums2, right - n);
31                }
32
33                left++;
34                right++;
35            }
36
37            if (gap == 1) break;
38            gap = (gap / 2) + (gap % 2);
39        }
40
41        // Copy nums2 into nums1
42        for (int i = 0; i < m; i++) {
43            nums1[n + i] = nums2[i];
44        }
45    }
46};