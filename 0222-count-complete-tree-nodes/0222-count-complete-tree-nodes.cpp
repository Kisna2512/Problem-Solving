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
    
    
    void dfs(TreeNode* root,int &cnt)
    {
        if(root==nullptr)
        {
            return;
        }
        
        cnt++;
        dfs(root->left,cnt);
        dfs(root->right,cnt);
        
    }
    
    
    
    int countNodes(TreeNode* root) {
        
        int cnt=0;
        dfs(root,cnt);
        
        return cnt;
        
        
        
        
        
        
        
        
        
        
    }
};