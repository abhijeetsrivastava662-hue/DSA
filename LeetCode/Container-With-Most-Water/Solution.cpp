1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int n=height.size();
5        int l=0;
6        int r=n-1;
7        int ans=0;
8        while(l<r){
9            ans= max(ans,(r-l)*min(height[l],height[r]));
10            if(height[l]<height[r]){
11                l++;
12            }else{
13                r--;
14            }
15
16        }
17        return ans;
18
19    }
20};