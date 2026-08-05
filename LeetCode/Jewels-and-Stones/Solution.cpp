1class Solution {
2public:
3    int numJewelsInStones(string jewels, string stones) {
4        unordered_set<char> jewelSet;
5        for(char ch: jewels){
6            jewelSet.insert(ch);
7        }
8        int count=0;
9        for(char ch: stones){
10            if(jewelSet.count(ch)){
11                count++;
12            }
13        }
14        return count;
15        
16    }
17};