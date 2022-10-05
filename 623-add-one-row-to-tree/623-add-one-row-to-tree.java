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
    public TreeNode addOneRow(TreeNode root, int val, int depth) {
        
        if(depth==1)
        {
            return new TreeNode(val,root,null);
        }
        
        
        Queue<TreeNode> q=new LinkedList<>();
        q.add(root);
        
        
        int sdepth=2;
        
        while(sdepth++ < depth)
        {
            System.out.println("krishna");
            int size=q.size();
            while(size-- > 0)
            {
                TreeNode front=q.poll();
                if(front.left!=null)
                {
                    q.add(front.left);
                }
                
                if(front.right!=null)
                {
                    q.add(front.right);
                }
            }
            
        }
        
        
        for(TreeNode node:q)
        {
            node.left=new TreeNode(val,node.left,null);
            node.right=new TreeNode(val,null,node.right);
        }
        
        
        return root;
        
    }
}