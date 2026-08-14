1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> prefix(n,1),suffix(n,1),result(n);
6        for(int i=1;i<n;i++){
7            prefix[i]=prefix[i-1]*nums[i-1];
8        }
9        for(int i=n-2;i>=0;i--){
10            suffix[i]=suffix[i+1]*nums[i+1];
11        }
12        for(int i=0;i<n;i++){
13            result[i]=prefix[i]*suffix[i];
14        }
15        return result;
16    }
17};