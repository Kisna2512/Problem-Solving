/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}

 *    ListNode(int x) : val(x), next(nullptr) {}

 *    ListNode(int x, ListNode *next) : val(x), next(next) {}

 *};

 */
class Solution
{
public:
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *nlist = new ListNode(-1);
        ListNode *temp = head;
        ListNode *ans = nlist;
        while (temp != NULL)
        {
            if (temp->val == 0)
            {
                temp = temp->next;
                int sum = 0;
                while (temp != NULL && temp->val != 0)
                {
                    sum += temp->val;
                    temp = temp->next;
                }

                if (sum != 0)
                {
                    ListNode *tt = new ListNode(sum);
                    nlist->next = tt;
                    nlist = nlist->next;
                }
            }
            else
            {
                if (temp != nullptr)
                {
                    temp = temp->next;
                }
                else
                {
                    break;
                }
            }
        }

        return ans->next;
    }
};