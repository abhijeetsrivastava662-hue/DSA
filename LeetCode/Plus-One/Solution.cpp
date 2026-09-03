1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4        int n=digits.size();
5        
6        for(int i=n-1;i>=0;i--){
7           if(digits[i]<9){
8               digits[i]++;
9               return digits;
10           }
11           //if last digit is 9
12           digits[i]=0;
13        }
14        //every digit is 9 which becames 0 now insert 1 only
15        digits.insert(digits.begin(),1);
16        return digits;
17    }
18};