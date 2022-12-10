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
  int mod = 1e9 + 7;
  public:

    int total_tree_sum(TreeNode * root) {
      if (root == NULL) {
        return 0;
      }

      return (total_tree_sum(root -> left) + root -> val + total_tree_sum(root -> right));
    }

  long long solve(TreeNode * node, int total, long long & ans) {
    if (node == nullptr) {
      return 0;
    }

    int temp = solve(node -> left, total, ans) + node -> val + solve(node -> right, total, ans);
    long long prod = 1 LL * temp * (total - temp);
    ans = max(ans, prod);
    return temp;
  }

  int maxProduct(TreeNode * root) {

    int total_sum = total_tree_sum(root);

    long long ans = 0;
    solve(root, total_sum, ans);
    return (ans % mod);

  }
};
