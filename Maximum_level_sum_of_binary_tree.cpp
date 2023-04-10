/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int maxLevelSum(TreeNode *root)
    {
        int ll = 0;
        queue<TreeNode *> q;
        q.push(root);
        int maxi = INT_MIN;
        int i = 1;
        while (!q.empty())
        {
            int sz = q.size();
            int sum = 0;
            for (int i = 0; i < sz; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                sum += node->val;
                if (node->left)
                {
                    q.push(node->left);
                }

                if (node->right)
                {
                    q.push(node->right);
                }
            }

            if (sum > maxi)
            {
                maxi = sum;
                ll = i;
            }
            i++;
        }
        return ll;
    }
};