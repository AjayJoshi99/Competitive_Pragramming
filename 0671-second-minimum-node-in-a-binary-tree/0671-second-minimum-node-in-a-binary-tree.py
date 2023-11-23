# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findSecondMinimumValue(self, root: Optional[TreeNode]) -> int:
        s = set()
        def inorder(r):
            if r.left : inorder(r.left)
            s.add(r.val)
            if r.right : inorder(r.right)
        inorder(root)
        s.discard(min(s))
        if s:
            return min(s)
        return -1