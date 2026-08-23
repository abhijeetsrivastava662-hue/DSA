1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        
5        int n=nums.size();
6        vector<int> ans;
7        int zero=0;
8        for(int i=0;i<n;i++){
9            if(nums[i]==0) zero++;
10            else ans.push_back(nums[i]); 
11        }
12        while(zero){
13            ans.push_back(0);
14            zero--;
15        }
16        nums=ans;
17    }
18};