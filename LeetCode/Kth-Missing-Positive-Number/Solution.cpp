1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4        int low=0,high=arr.size()-1;
5        while(low<=high){
6            int mid=(low+high)/2;
7            int missing=arr[mid]-(mid+1);
8            if(missing<k){
9                low=mid+1;
10            }else{
11                high=mid-1;
12            }
13        }
14        return high+1+k;//also can be write as low+k
15        
16    }
17};