1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n=height.size();
5        int l=0;
6        int r=n-1;
7        int maxArea=0;
8        while(l<r){
9            if(height[l]<=height[r]){
10                int area= min(height[l],height[r]) * (r-l);
11                maxArea=max(maxArea,area);
12                l++;
13            }else{
14                 int area= min(height[l],height[r]) * (r-l);
15                maxArea=max(maxArea,area);
16                r--;
17            }
18        }
19        return maxArea;
20    }
21};