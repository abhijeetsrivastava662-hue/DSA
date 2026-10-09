1class Solution {
2public:
3    int minSwaps(string s) {
4        int open=0;
5        int close=0;
6        int swap=0;
7        for(char ch:s){
8            if(ch=='['){
9                open++;
10            }else{
11                close++;
12                
13                if(close>open){
14                    swap++;
15                    close--;
16                }
17            }       
18        }
19        return (swap+1)/2;
20    }
21};