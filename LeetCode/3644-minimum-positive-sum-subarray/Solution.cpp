class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            vector<int> arr;
            arr.push_back(nums[i]);
            int sum=nums[i];
            if(sum>0 && l<=1 && r>=1){
                ans=min(ans,sum);
            }
            for(int j=i+1;j<n;j++){
               sum+=nums[j];
               arr.push_back(nums[j]);
               if(sum>0 && arr.size()>=l && arr.size()<=r){
                ans=min(ans,sum);
               } 
            }
        }
        return (ans==INT_MAX) ? -1 : ans;
     }
};