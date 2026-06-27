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
13    ListNode* deleteMiddle(ListNode* head) {
14        if(head==NULL || head->next==NULL) return NULL;
15        ListNode* slow=head;
16        ListNode* fast=head;
17        fast=fast->next->next; //this step is imp for skipping one step of slow and stopping before middle node to vhange the link
18        while(fast!=NULL && fast->next!=NULL){
19            slow=slow->next;
20            fast=fast->next->next;
21        }
22        ListNode* Middle = slow->next;
23        slow->next = slow->next->next;
24        delete Middle;
25        return head;
26        
27    }
28};