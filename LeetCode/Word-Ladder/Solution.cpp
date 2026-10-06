1class Solution {
2public:
3    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
4        queue<pair<string,int>> q;
5        q.push({beginWord,1});
6        unordered_set<string> set(wordList.begin(),wordList.end());
7        set.erase(beginWord);
8        while(!q.empty()){
9            string word=q.front().first;
10            int steps=q.front().second;
11            q.pop();
12            if(word==endWord) return steps;
13            for(int i=0;i<word.size();i++){
14                int original=word[i];
15                for(char ch='a';ch<='z';ch++){
16                    word[i]=ch;
17                    if(set.find(word)!=set.end()){
18                        q.push({word,steps+1});
19                        set.erase(word);
20                    }
21                }
22                word[i]=original;
23            }
24    }
25    return 0;
26    }
27};