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
13    ListNode* findMiddle(ListNode* head){
14        ListNode* slow=head;
15        ListNode* fast=head->next;
16        while(fast!=NULL&&fast->next!=NULL){
17            slow=slow->next;
18            fast=fast->next->next;
19        }
20        return slow;
21    }
22public:
23    ListNode* mergeTwoList(ListNode* left,ListNode* right){
24       ListNode* t1=left;
25       ListNode* t2=right;
26       ListNode* dummyNode = new ListNode(-1);
27       ListNode* temp = dummyNode;
28       while(t1!=NULL && t2!=NULL){
29         if(t1->val < t2->val){
30            temp->next=t1;
31            t1=t1->next;
32         }else{
33            temp->next=t2;
34            t2=t2->next;
35         }
36         temp=temp->next;
37       } 
38       if(t1) temp->next=t1;
39       else temp->next = t2;
40       return dummyNode->next;
41    }
42public:
43    ListNode* sortList(ListNode* head) {
44        if(head==NULL || head->next==NULL) return head;
45        ListNode* Mid = findMiddle(head);
46        ListNode* left = head;
47        ListNode* right= Mid->next;
48        Mid->next=nullptr;
49        left= sortList(left);
50        right=  sortList(right);
51        return mergeTwoList(left,right);
52
53    }
54};