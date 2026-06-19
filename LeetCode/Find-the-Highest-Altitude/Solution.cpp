1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int currAltitude = 0;
5        int maxAltitude = 0;
6
7        for(int g : gain) {
8            currAltitude += g;
9            maxAltitude = max(maxAltitude, currAltitude);
10        }
11
12        return maxAltitude;
13    }
14};