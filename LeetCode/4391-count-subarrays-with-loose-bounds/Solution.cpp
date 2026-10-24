class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int n=nums.size();
        int lasti=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<minK||nums[i]>maxK){
                lasti=i;
            }
            ans+=(i-lasti);
        }
        return ans;
    }
};