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
    int findBottomLeftValue(TreeNode* root) {
        
        
        queue<TreeNode*> q;
        int ans;
        
        q.push(root);
        
        while(!q.empty())
        {
            int  size=q.size();
            vector<int> ll;
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                
                ll.push_back(temp->val);
                
                
                if(temp->left)
                {
                    q.push(temp->left);
                }
                
                if(temp->right)
                {
                    q.push(temp->right);
                }
                
                
                
                
            }
            
            
            ans=ll[0];
            
            
            
            
            
            
            
        }
        
        
        
        
        return ans;
        
        
        
        
        
        
        
        
        
        
    }
};