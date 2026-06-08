1class Solution {
2public:
3    int firstUniqChar(string s) {
4        unordered_map<char, int> freq;
5        queue<int> q;
6
7        for (int i = 0; i < s.size(); i++) {
8            freq[s[i]]++;
9            q.push(i);
10
11            while (!q.empty() && freq[s[q.front()]] > 1) {
12                q.pop();
13            }
14        }
15        if(q.empty())
16        return -1;
17        else return q.front();
18    }
19};