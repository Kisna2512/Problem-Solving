/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
    boolean fun(TreeNode root,int tsum)
    {
        if(root==null)
        {
            return false;
        }
        
        if(root.left==null && root.right==null)
        {
            if(tsum==root.val)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
       boolean a= fun(root.left,tsum-root.val);
       boolean b= fun(root.right,tsum-root.val);
        return a | b;
        
    }
    
    public boolean hasPathSum(TreeNode root, int targetSum) {
        return fun(root,targetSum);
    }
}