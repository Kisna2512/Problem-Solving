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
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *tt = head;
        int cnt = 0;
        vector<int> a;
        vector<int> temp;
        while (tt != NULL)
        {
            if (cnt == k)
            {
                reverse(temp.begin(), temp.end());
                for (auto it : temp)
                {
                    a.push_back(it);
                }
                cnt = 0;
                temp.clear();
            }
            else
            {
                temp.push_back(tt->val);
                tt = tt->next;
                cnt++;
            }
        }

        if (temp.size())
        {
            if (cnt == k)
            {
                reverse(temp.begin(), temp.end());
            }

            for (auto it : temp)
            {
                a.push_back(it);
            }
        }

        head = new ListNode(-1);
        ListNode *tg = head;
        for (auto it : a)
        {
            ListNode *n = new ListNode(it);

            if (head == NULL)
            {
                head = n;
                continue;
            }
            ListNode *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = n;
        }

        return tg->next;
    }
};