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
    vector<double> averageOfLevels(TreeNode* root) { 
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int size=q.size();
            double front=0;
            for(int i=0;i<size;i++)
            {
                TreeNode* f=q.front();
                front+=f->val;
                q.pop();
                
                if(f->left)
                {
                    q.push(f->left);
                }
                
                if(f->right)
                {
                    q.push(f->right);
                }
            }
            ans.push_back((double)(front/size));
        }
        
        return ans;
        
    }
};
