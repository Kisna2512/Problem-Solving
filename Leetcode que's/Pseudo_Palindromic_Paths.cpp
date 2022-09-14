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
    
    void dfs(int & cnt,vector<int> &temp,TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        } 
        temp[root->val]++;
        if(root->left==NULL && root->right==NULL)
        {
            int count=0;
            for(auto it:temp){
                if((it & 1) == 1)
                {
                    count++;
                }    
            }
            if(count<=1)
            {
                 cnt++;
            }
            temp[root->val]--;
            return;     
        }
          dfs(cnt,temp,root->left);
          dfs(cnt,temp,root->right);  
         temp[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> ans(10,0);
        int cnt=0;
        dfs(cnt,ans,root);
        return cnt;
    }
};
