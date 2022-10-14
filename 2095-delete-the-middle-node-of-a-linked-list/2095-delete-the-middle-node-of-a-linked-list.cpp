/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=new ListNode(-1);
        temp->next=head;
        ListNode* slow=temp;
        ListNode* fast=temp;
        if(head->next==NULL)
        {
            return NULL;
        }
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* t=slow->next;
        slow->next=slow->next->next;
        delete t;
        return head; 
    }
};