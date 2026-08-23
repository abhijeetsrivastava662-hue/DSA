1class Solution {
2public:
3    bool sumGame(string num) {
4        int n=num.length();
5        int leftSum=0;
6        int rightSum=0;
7        int leftQue=0;
8        int rightQue=0;
9        for(int i=0 ;i<n;i++){
10           if(num[i]=='?'){
11            if(i<n/2){
12                leftQue++;
13            }else{
14                rightQue++;
15            }
16           }else{
17            if(i<n/2){
18                leftSum+=num[i]-'0';
19            }else{
20                rightSum+=num[i]-'0';
21            }
22           }
23        }
24        int totalQue= leftQue + rightQue;
25        if(totalQue%2==1){
26            return true;
27        }
28        int LEFT = 2*leftSum+ 9*leftQue;
29        int RIGHT = 2*rightSum+ 9*rightQue;
30
31        if(LEFT==RIGHT){
32            return false;
33        }else {
34            return true;
35        }
36        
37    }
38};