# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        tree = TreeNode(0)
        temp = tree
        def inorder(r):
            nonlocal  tree
            if r.left : inorder(r.left)
            tree.right = TreeNode(r.val)
            tree = tree.right
            if r.right : inorder(r.right)
        inorder(root)       
        return temp.right
            
        
            