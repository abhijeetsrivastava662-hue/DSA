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
13            // TC -> N*word.length*26
14            for(int i=0;i<word.size();i++){
15                int original=word[i];
16                for(char ch='a';ch<='z';ch++){
17                    word[i]=ch;
18                    if(set.find(word)!=set.end()){
19                        q.push({word,steps+1});
20                        set.erase(word);
21                    }
22                }
23                word[i]=original;
24            }
25    }
26    return 0;
27    }
28};