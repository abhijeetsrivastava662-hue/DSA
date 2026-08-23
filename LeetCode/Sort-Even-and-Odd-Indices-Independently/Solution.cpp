1class Solution {
2public:
3    vector<int> sortEvenOdd(vector<int>& nums) {
4        vector<int> even,odd;
5        for(int i=0;i<nums.size();i++){
6            if(i%2==0){
7                even.push_back(nums[i]);
8            }else {
9                odd.push_back(nums[i]);
10            }
11        }
12        sort(even.begin(),even.end());
13        sort(odd.begin(),odd.end());
14        reverse(odd.begin(),odd.end());
15        int l=0,k=0;
16        for(int i=0;i<nums.size();i++){
17            if(i%2==0){
18                nums[i]=even[k];
19                k++;
20            }else{
21                nums[i]=odd[l];
22                l++;
23            }
24        }
25        return nums;
26    }
27};