class Solution {
public:
    long long maxDifference(vector<int>& nums) {
        int n=nums.size();
        long long alc=0;
        long long bob=0;
        for(int i=n-1;i>=0;i--){
            long long s=nums[i];
            long long best=(s%3)?s+alc:s-alc;
            if(i+1<n){
                long long s2=(long long)nums[i]+nums[i+1];
                long long rem=(s2%3)?s2+bob:s2-bob;
                if(rem>best) best=rem;
            }
            bob=alc;
            alc=best;
        }
        return alc;
    }
};