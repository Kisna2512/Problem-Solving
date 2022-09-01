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
class Solution {
public:
    
    
    void fun(TreeNode* root,int max,int &ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->val >= max)
        {
            max=root->val;
            ans++;
        }
        fun(root->left,max,ans);
        fun(root->right,max,ans);
            
    }
    
    
    
    
    int goodNodes(TreeNode* root) {
        int ans=0;
        fun(root,INT_MIN,ans);
        return ans;
    }
};
