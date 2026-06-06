1class Solution {
2public:
3    int findNoOfDays(vector<int>& weights, int cap){
4        int days = 1,load=0;
5        for(int i=0;i<weights.size();i++){
6            if(weights[i]+load > cap){
7                days = days+1;
8                load=weights[i];
9            }else{
10                load +=weights[i];
11            }
12        }
13        return days;
14    }
15    int shipWithinDays(vector<int>& weights, int days) {
16        int low = *max_element(weights.begin(),weights.end());
17        int high = accumulate(weights.begin(),weights.end(),0);
18        while(low<=high){
19            int mid=(low+high)/2;
20            if(findNoOfDays(weights,mid)<=days){
21                high = mid-1;
22            }else{
23                low= mid+1;
24            }
25        }
26        return low;
27    }
28};