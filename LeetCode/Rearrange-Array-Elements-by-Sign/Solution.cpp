1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) {
4        int pos=0;
5        int neg=1;
6        int n=nums.size();
7        vector<int> temp(n);
8        for(int i=0;i<n;i++){
9            if(nums[i]>0){
10                temp[pos]=nums[i];
11                pos+=2;
12            }else {
13                temp[neg]=nums[i];
14                neg+=2;
15            }
16        }
17        return temp;
18        
19    }
20};