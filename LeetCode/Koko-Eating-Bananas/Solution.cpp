1class Solution {
2public:
3    long long calculateHours(vector<int>& piles, int speed) {
4        long long totalHours = 0;
5
6        for (int bananas : piles) {
7            totalHours += (bananas + speed - 1) / speed; // ceil division
8        }
9
10        return totalHours;
11    }
12
13    int minEatingSpeed(vector<int>& piles, int h) {
14        int low = 1;
15        int high = *max_element(piles.begin(), piles.end());
16
17        while (low <= high) {
18            int mid = low + (high - low) / 2;
19
20            long long hours = calculateHours(piles, mid);
21
22            if (hours <= h) {
23                high = mid - 1;   // try smaller speed
24            } else {
25                low = mid + 1;    // need faster speed
26            }
27        }
28
29        return low;
30    }
31};