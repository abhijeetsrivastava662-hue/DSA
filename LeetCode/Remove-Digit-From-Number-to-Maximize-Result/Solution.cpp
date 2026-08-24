1class Solution {
2public:
3    string removeDigit(string number, char digit) {
4        int n=number.size();
5        string maxi="";
6        for(int i=0;i<number.size();i++){
7            if(number[i]==digit){
8                string sub1= number.substr(0,i);
9                string sub2= number.substr(i+1);
10                string ans= sub1+sub2;
11                maxi=max(maxi,ans);
12            }
13            
14        }
15        return maxi;
16    }
17};