1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.size()!=t.size()) return false;
5
6        vector<int> freq(26,0); // ek nayi array banao talol possible appering characters ke
7
8        for(char ch : s){
9           freq[ch-'a']++; //array mein increment kardo agar vo element s mein ho toh
10        }
11        for(char ch : t){
12            freq[ch-'a']--; //array mein decrement agar vo element t mein ho toh
13        }
14
15        for(int count : freq){
16            if(count!=0)
17                return false;//matlab koi toh element jyada ya different hai kisi string mein
18            
19        }
20        return true;
21        
22    }
23};