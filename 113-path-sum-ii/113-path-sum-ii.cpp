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
    
    void fun(TreeNode* root,int tsum, vector<vector<int>> & ans,vector<int> v)
    {
        if(root==nullptr)
        {
            return;
        }
        
        
        if(root->left==nullptr && root->right==nullptr)
        {
            if(tsum==root->val)
            {
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        }
        
        
        v.push_back(root->val);
        fun(root->left,tsum-root->val,ans,v);
        fun(root->right,tsum-root->val,ans,v);
        v.pop_back();
        
        
        
        
        
    }
    
    
    
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        fun(root,targetSum,ans, v);
        return ans;
    }
};