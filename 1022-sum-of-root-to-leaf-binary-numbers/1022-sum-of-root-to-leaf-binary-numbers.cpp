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
    
    
    
    int convertB(string str)
    {
        
        
        int i=str.size()-1;
        int ans=0;
        int j=0;
        while(i >=0 )
        {
            ans=ans+pow(2,j++)*(str[i]-'0');
            i--;
        }
        
        return ans;
        
        
    }
    
    
    void dfs(TreeNode* root,vector<string>& res,string ans)
    {
        
        if(root==nullptr)
        {
            return;
        }
        
        if(root->left==nullptr && root->right==nullptr)
        {
            ans=ans+to_string(root->val);
            
            res.push_back(ans);
            return ;
        }
        // if(root==nullptr)
        // {
        //     return ;
        // }
       
            dfs(root->left,res,ans+to_string(root->val));
            dfs(root->right,res,ans+to_string(root->val));
        
        
       
      return;
        
         
    }
    
    
    
    
    int sumRootToLeaf(TreeNode* root) {
        vector <string> res;
        dfs(root,res,"");
        int ans=0;
        for(auto it:res)
        {
            cout<<it<<" ";
           ans+=convertB(it);
        }
        return ans;
    }
};









