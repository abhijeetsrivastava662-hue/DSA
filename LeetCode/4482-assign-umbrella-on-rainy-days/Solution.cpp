class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n=rain.size();
        vector<string> ans;
        int alice=0;
        int bob=0;
        
        for(int i=0;i<n;i++){
            bool aliceNeed = (i < n-1&&rain[i]==1&&rain[i + 1] == 1);
            bool bobNeed = (rain[i] == 1);
            if(!aliceNeed&&!bobNeed){
                ans.push_back("None");
            }else if(aliceNeed&&!bobNeed) {
                ans.push_back("Alice");
                alice++;
            }
            else if(!aliceNeed && bobNeed) {
                ans.push_back("Bob");
                bob++;
            }else{
                if(alice <= bob) {
                    ans.push_back("Alice");
                    alice++;
                }else{
                    ans.push_back("Bob");
                    bob++;
                }
            }
        }
        return ans;
    }
};