1class Solution {
2public:
3    int carFleet(int target, vector<int>& position, vector<int>& speed) {
4        int n=position.size();
5        stack<float> st;
6        vector<pair<int,float>> vec(n); // array m pos or speed store karenge
7        for(int i=0;i<n;i++){
8            vec.push_back({position[i],float(target-position[i])/speed[i]});
9        }
10        sort(vec.begin(),vec.end()); //pos ke according arr ko sort kardenge
11        for(auto it:vec){
12            float time =it.second;
13            // ab agar current car ka time jyada hua st ke top wale se toh vo pop ho jayega
14            while(!st.empty() && st.top()<=time){
15                st.pop();
16            }
17            st.push(time);
18        }
19        return st.size();
20    }
21};