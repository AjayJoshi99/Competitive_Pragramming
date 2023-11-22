# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        if not root : return 0
        if root.right and not root.left or (not root.right and root.left): return max(self.minDepth(root.left), self.minDepth(root.right))+1
        return min(self.minDepth(root.left), self.minDepth(root.right))+1 