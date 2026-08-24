1class Solution {
2public:
3    vector<int> twoSum(vector<int>& num, int target) {
4       int i=0;
5       
6       int n=num.size();
7       int j=n-1;
8       while(i<=j){
9          int mid=(i+j)/n;
10          if(num[i]+num[j]==target){
11            return {i+1,j+1};
12          }
13          else if((num[i]+num[j])>target){
14             j--;
15          } else{
16            i++;
17          }
18
19      }
20      return {};
21    }
22};