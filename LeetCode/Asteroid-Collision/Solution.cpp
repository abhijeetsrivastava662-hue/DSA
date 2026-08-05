1class Solution {
2public:
3    vector<int> asteroidCollision(vector<int>& aster) {
4        list<int> lst;
5        for(int i=0;i<aster.size();i++){
6            if(aster[i]>0) {lst.push_back(aster[i]);
7            continue;}
8            while(!lst.empty() && lst.back()>0 && abs(aster[i])>lst.back()){
9                lst.pop_back();
10            }
11            if(!lst.empty() && abs(aster[i])==lst.back()){
12                lst.pop_back();
13            }else if(lst.empty() || lst.back()<0){
14                lst.push_back(aster[i]);
15            }
16        }
17        return vector<int>(lst.begin(), lst.end());
18    }
19};