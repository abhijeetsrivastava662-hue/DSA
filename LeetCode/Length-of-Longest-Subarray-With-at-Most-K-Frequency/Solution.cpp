1class Solution {
2public:
3    int maxSubarrayLength(vector<int>& nums, int k) {
4    int l=0;
5    int ans=0;
6    unordered_map<int,int> freq;
7    for(int r=0;r<nums.size();r++){
8        freq[nums[r]]++;
9        while(freq[nums[r]]>k){
10            freq[nums[l]]--;
11            l++;
12        }
13        ans=max(ans,r-l+1);
14    }
15    return ans;
16    }
17};