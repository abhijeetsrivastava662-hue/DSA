1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) {
13        int l=1;
14        int h=n;
15        while(l<h){
16            int mid=l+(h-l)/2;
17            int ans=guess(mid);
18            if(ans==0) return mid;
19            else if(ans==-1)
20            h=mid-1;
21            else
22            l=mid+1;
23        }
24        return l;
25    }
26};