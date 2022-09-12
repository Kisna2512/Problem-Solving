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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* node=head;
        int size=0;
        while(node!=nullptr)
        {
            size++;
            node=node->next;
        }
        node=head;
        int idx=size-n;
        if(idx > 0)
        {
            idx=idx-1;
        while(idx--)
        {
            node=node->next;
        }
        cout<<node->val<<endl;
        node->next=node->next->next;
        }else
        {
            if(size == 1)
                head = NULL;
            else
                head = head->next;
        }
        return head; 
    }
};
