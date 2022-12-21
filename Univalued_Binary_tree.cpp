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


    set<int> st;

    void preorder(TreeNode* root)
    {
        if(root==nullptr) return;
        preorder(root->left);
        st.insert(root->val);
        preorder(root->right);
    }


    bool isUnivalTree(TreeNode* root) {
        preorder(root);
        if(st.size()==1) return true;
        return false;
    }
};
