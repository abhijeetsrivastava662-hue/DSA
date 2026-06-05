1class Solution {
2public:
3    bool possible(vector<int>& bloomDay,int day,int m,int k){
4        int cnt=0,noOfB=0;
5        for(int i=0;i<bloomDay.size();i++){
6            if(bloomDay[i]<=day){
7                cnt++;
8            }else{
9                noOfB+=(cnt/k);
10                cnt=0;
11            }
12        }
13        noOfB+=(cnt/k);
14        return noOfB>=m;
15    }
16    int minDays(vector<int>& bloomDay, int m, int k) {
17        long long val = m*1LL *k*1LL;
18        if(val>bloomDay.size()) return -1;
19        int mini=INT_MAX, maxi=INT_MIN;
20        for(int i=0;i<bloomDay.size();i++){
21            mini = min(mini,bloomDay[i]);
22            maxi = max(maxi,bloomDay[i]);
23        }
24            int low=mini,high=maxi;
25            while(low<=high){
26                int mid=(low+high)/2;
27                if(possible(bloomDay,mid,m,k)){
28                    high=mid-1;
29                }else{
30                    low=mid+1;
31                }
32            }
33        
34        return low;
35        
36    }
37};