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




    void pre1(TreeNode* root1,vector<int> &ans1)
    {
        if(root1==nullptr)
        {
            return;
        }

      if(root1->left==nullptr && root1->right==nullptr)
      {
           ans1.push_back(root1->val);
      }
       pre1(root1->left,ans1);
        pre1(root1->right,ans1);



    }


  void pre2(TreeNode* root2,vector<int> &ans2)
    {
        if(root2==nullptr)
        {
            return;
        }

      if(root2->left==nullptr && root2->right==nullptr)
      {
           ans2.push_back(root2->val);
      }
       pre1(root2->left,ans2);
        pre1(root2->right,ans2);



    }


    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        

         vector<int> ans1;
         vector<int> ans2;

       pre1(root1,ans1);
       pre2(root2,ans2);

       return (ans1==ans2);


    }
};
