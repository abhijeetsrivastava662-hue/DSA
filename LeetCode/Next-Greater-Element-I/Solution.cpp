1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int,int> m;
5        stack<int> st;
6        int n2=nums2.size();
7        for(int i=n2-1;i>=0;i--){
8
9            while(!st.empty() && st.top()<=nums2[i]){
10                st.pop();
11            }
12            if(st.empty()){ m[nums2[i]]=-1;}
13            else{ m[nums2[i]]=st.top();}
14
15            st.push(nums2[i]);
16
17        }
18        vector<int> ans;
19        for(int i=0;i<nums1.size();i++){
20            ans.push_back(m[nums1[i]]);
21        }
22        return ans;
23        
24    }
25};