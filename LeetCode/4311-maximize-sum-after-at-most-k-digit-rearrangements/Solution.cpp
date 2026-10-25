class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n);
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            string num=to_string(nums[i]);
            sort(num.begin(),num.end(),greater<char>());
            ans[i]=stoi(num)-nums[i];
        }
        sort(ans.begin(),ans.end(),greater<int>());
            for(int i=0;i<n&&k>0;i++){
                if(ans[i]<=0) break;
                else sum+=ans[i];
                k--;
            }
        return sum;
    }
};