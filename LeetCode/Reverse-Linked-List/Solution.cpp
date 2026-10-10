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
13    ListNode* reverseList(ListNode* head) {
14        //Iterative solution
15        ListNode* temp=head;
16        ListNode* prev=NULL;
17        while(temp!=NULL){
18            ListNode* front = temp->next;
19            temp->next=prev;
20            prev=temp;
21            temp=front;
22        }
23        return prev;
24        
25    }
26};