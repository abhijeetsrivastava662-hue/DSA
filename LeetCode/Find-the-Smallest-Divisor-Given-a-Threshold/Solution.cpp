1class Solution {
2public:
3    int sumbyD(vector<int>& arr, int div){
4          int sum=0;
5          for(int i=0; i<arr.size();i++){
6            sum = sum +ceil((double)(arr[i])/(double)(div));
7          }
8          return sum;
9    }
10    int smallestDivisor(vector<int>& arr, int threshold) {
11        int low=1,high=*max_element(arr.begin(),arr.end());
12        while(low<=high){
13            int mid=(low+high)/2;
14            if(sumbyD(arr,mid)<=threshold){
15                high=mid-1;
16            }else{
17                low=mid+1;
18            }
19
20        }
21        return low;
22        
23    }
24};