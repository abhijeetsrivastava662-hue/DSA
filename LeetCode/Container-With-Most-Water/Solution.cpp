1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n=height.size();
5        int l=0;
6        int r=n-1;
7        int maxi=0;
8
9        while(l<r){
10            if(height[l]<=height[r]){
11                int area = min(height[l],height[r])*(r-l);
12                maxi=max(maxi,area);
13                l++;
14
15            }else {
16                int area = min(height[l],height[r])*(r-l);
17                maxi=max(maxi,area);
18                r--;
19            }
20
21        }
22        return maxi;
23
24    }
25};