//Link:https://leetcode.com/problems/find-mode-in-binary-search-tree/

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
    
    void helper(TreeNode* root,unordered_map<int,int> &mp)
    {
        
        if(root==NULL)
        {
            return;
        }
        
        mp[root->val]++;
        helper(root->left,mp);
        helper(root->right,mp);
        return;
        
    }
  
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> mp;
        helper(root,mp);
        priority_queue<pair<int,int>> pq;
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        int max=pq.top().first;
        vector<int> ans;
        
        while(pq.top().first==max && !pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
        
            
    }
};
