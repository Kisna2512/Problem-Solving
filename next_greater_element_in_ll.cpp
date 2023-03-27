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
class Solution
{
public:
    vector<int> nextLargerNodes(ListNode *head)
    {
        vector<int> ans;
        if (head == nullptr)
        {
            return {};
        }
        if (head->next == nullptr)
        {
            return {0};
        }

        int l;
        while (head != NULL)
        {
            int val = head->val;
            ListNode *temp = head->next;
            l = 0;
            while (temp != NULL)
            {
                if (temp->val > val)
                {
                    l = temp->val;
                    break;
                }
                temp = temp->next;
            }
            ans.push_back(l);
            head = head->next;
        }

        return ans;
    }
};