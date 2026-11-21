class Solution {
public:
    int minRange(int a, int b, int c) {
        vector<int> arr={a,b,c};
        sort(arr.begin(),arr.end());
        int x=arr[0];
        int y=arr[1];
        int z=arr[2];
        return min(z-x,y);
    }
};