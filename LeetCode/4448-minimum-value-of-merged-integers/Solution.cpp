class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i+=2){
            int x=nums[i];
            int y=nums[i+1];
            int digit=1;
            int temp=y;
            while(temp>=10){
                digit++;
                temp/=10;
            }
            int pow=1;
            while(digit--){
                pow*=10;
            }
            int merge=x*pow+y;
            ans=min(ans,merge);
        }
        return ans;
    }
};