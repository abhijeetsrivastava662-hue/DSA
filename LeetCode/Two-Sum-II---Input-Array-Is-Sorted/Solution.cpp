1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int l=0,r=numbers.size()-1;
5        while(l<=r){
6            if(numbers[l]+numbers[r]==target)
7            return {l+1,r+1};
8            else if(numbers[l]+numbers[r]>target)
9            r--;
10            else 
11            l++;
12        }
13        return {};
14    }
15};