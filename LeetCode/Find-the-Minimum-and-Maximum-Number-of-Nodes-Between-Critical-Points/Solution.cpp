1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
14        ListNode* temp=head;
15        vector<int> arr;
16        while(temp){
17            arr.push_back(temp->val);
18            temp=temp->next;
19        }
20        int n=arr.size();
21        int mini=INT_MAX;
22        int maxi=INT_MIN;
23        vector<int> critical;
24        for(int i=1;i<n-1;i++){
25            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
26                critical.push_back(i);
27            }
28            if(arr[i-1]>arr[i] && arr[i]<arr[i+1]){
29                critical.push_back(i);
30            }
31            }
32            if(critical.size()<2) return {-1,-1};
33            
34            for(int i=1;i<critical.size();i++){
35                mini=min(mini,abs(critical[i]-critical[i-1]));
36            }
37            maxi=critical.back()-critical.front();
38            return {mini,maxi};
39    }
40};