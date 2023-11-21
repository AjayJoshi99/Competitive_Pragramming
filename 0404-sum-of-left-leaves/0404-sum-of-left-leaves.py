# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    leaf_sum = 0
    def sumOfLeftLeaves(self, r: Optional[TreeNode]) -> int:
        def find_sum(root: Optional[TreeNode],left: bool):
            if not root.right and not root.left and left :
                self.leaf_sum += root.val
            if root.left : find_sum(root.left, 1)
            if root.right : find_sum(root.right,0)
        find_sum(r,0)
        return self.leaf_sum