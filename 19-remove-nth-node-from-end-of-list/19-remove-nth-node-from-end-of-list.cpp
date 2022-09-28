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
        // Time Complexity=:O(2N)
        // Space Complexity:-O(1)
//         ListNode* temp=head;
//         int size=0;
//         while(temp!=nullptr)
//         {
//             size++;
//             temp=temp->next;
//         }
//         temp=head;
//         int idx=size-n;
        
//         if(idx > 0)
//         {
//             idx=idx-1;
//             while(idx--)
//             {
//                 temp=temp->next;
//             }
            
//             temp->next=temp->next->next;
//         }else
//         {
//             if(size==1)
//             {
//                 head=nullptr;
//             }else
//             {
//                 head=head->next;
//             }
//         }
        
//         return head;  
        
        
        //Time Complexity:-O(N)
        //Space Complexity:-O(1)
        ListNode* temp=new ListNode();
        temp->next=head;
        
        ListNode* fast=temp;
        ListNode* slow=temp;
        
        for(int i=1;i<=n;i++)
        {
            fast=fast->next;
        }
        
        while(fast->next!=nullptr)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;  
        return temp->next;
    }
};