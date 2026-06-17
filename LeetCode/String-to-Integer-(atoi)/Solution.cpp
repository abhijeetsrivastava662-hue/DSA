1class Solution {
2public:
3    int myAtoi(string s) {
4        int i=0;
5        while(s[i]==' '){
6            i++;
7        }
8        int sign = 1;
9        //check for optional sign
10        if(s[i]=='+' || s[i]=='-'){
11            if(s[i]=='-'){
12                sign = -1;
13            }
14            i++;
15        }
16        long long result=0;
17        while(s[i]>='0' && s[i]<='9'){
18            result = result*10 + (s[i]-'0');
19
20            // check for overflow condition
21            if(result*sign>INT_MAX){
22                return INT_MAX;
23            }
24            if(result*sign<INT_MIN){
25                return INT_MIN;
26            }
27            i++;
28        }
29        return result*sign;
30        
31    }
32};