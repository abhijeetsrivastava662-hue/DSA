1class Solution {
2    private:
3    bool valid(char ch){
4        if( (ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z') || (ch>='0'&&ch<='9') )
5        return 1;
6        else{
7            return 0;
8        }
9    }
10    char toLowerCase(char ch){
11        if((ch>='a'&&ch<='z') || (ch>='0'&&ch<='9'))
12        return ch;
13        else{
14            char temp= ch-'A'+'a';
15            return temp;
16        }
17    }
18    bool checkPalindrome(string s) {
19       
20        int start=0,end=s.size()-1;
21        while(start<=end){
22           if(s[start]==s[end]){
23            start++;
24            end--;
25           }else{
26             return 0;
27           }
28         }
29         return 1;
30       
31    }
32public:
33   bool isPalindrome(string s) {
34        // faltu character hatado
35        string temp="";
36
37        for(int j=0;j<s.length();j++){
38            if(valid(s[j])){
39                temp.push_back(s[j]);
40            }
41        }
42        //lower case me kardo
43        for(int j=0;j<temp.length();j++){
44            temp[j]=toLowerCase(temp[j]);
45        }
46
47        return checkPalindrome(temp);
48
49       
50    }
51};