class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int mini=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                mini++;
            }
        }
        
        return mini;
    }
};