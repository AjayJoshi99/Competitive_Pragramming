# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        range_sum = 0
        def inorder(r):
            nonlocal range_sum
            if r.left : inorder(r.left)
            if r.val >= low and r.val <= high :
                range_sum += r.val
            if r.right : inorder(r.right)
        
        inorder(root)
        return range_sum 
                
                
                
            
                
            