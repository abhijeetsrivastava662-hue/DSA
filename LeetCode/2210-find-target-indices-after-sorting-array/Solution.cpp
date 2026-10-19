class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less=0,equal=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target) less++;
            else if(nums[i]==target) equal++;
        }
        vector<int> ans;
        for(int i=less;i<less+equal;i++){
            ans.push_back(i);
        }
        return ans;
    }
};