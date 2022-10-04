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
    
    
    bool fun(TreeNode* root,int sum)
    {
//         if(root==NULL)
//         {
//             if(sum < 0)
//             {
//                 return false;
//             }
            
//             if(sum==0)
//             {
//                 return true;
//             }
//             return false;
//         }
        
        
        
        if(root->left==NULL && root->right==NULL)
        {
            if(sum==0)
            {
                return true;
            }
            return false;
        }
    
       
        
        bool a,b;
        if(root->left)
        {
             a= fun(root->left,(sum-root->left->val));  
        }
         
        if(root->right)
        {
              b= fun(root->right,(sum-root->right->val));
        }
       
        return a | b ; 
        
        
        
    }
 
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
        {
            return false;
        }
        return fun(root,targetSum-root->val);
    }
};