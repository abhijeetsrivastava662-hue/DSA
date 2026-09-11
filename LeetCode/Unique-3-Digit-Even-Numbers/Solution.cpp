1class Solution {
2public:
3    int totalNumbers(vector<int>& digits) {
4        int n=digits.size();
5        unordered_set<int> st;
6
7        for(int i=0;i<n;i++){
8            if(digits[i]==0){
9                continue;
10            }
11            for(int j=0;j<n;j++){
12                if(i==j) continue;
13                for(int k=0;k<n;k++){
14                    if(k==i || k==j){
15                        continue;
16                    }
17                    if(digits[k]%2!=0){
18                        continue;
19                    }
20
21                    int num=digits[i]*100+digits[j]*10+digits[k];
22
23                    st.insert(num);
24
25                }
26            }
27        }
28        return st.size();
29    }
30};