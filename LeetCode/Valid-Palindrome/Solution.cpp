1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string filter;
5    for(char c:s){
6        if(isalnum(c)){
7            filter+=tolower(c);
8        }
9   
10    }
11    int left=0;
12    int right=filter.size()-1;
13
14    while(left<right){
15        if(filter[left]!=filter[right]){
16            return false;
17        }
18        else {
19            left++;
20            right--;
21        }
22    }
23    return true;
24        
25        
26    }
27};