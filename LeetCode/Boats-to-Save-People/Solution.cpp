1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        int n=people.size();
5        sort(people.begin(),people.end());
6        int l=0;
7        int r=n-1;
8        int boat=0;
9        while(l<=r){
10            if(people[l]+people[r]<=limit){
11                boat++;
12                l++;
13                r--;
14            } else {
15                boat++;
16                r--;
17            }
18        }
19        return boat;
20    }
21};