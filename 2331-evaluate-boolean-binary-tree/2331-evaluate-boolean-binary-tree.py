# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def evaluateTree(self, root: Optional[TreeNode]) -> bool:
        def evaluate(r):
            if r.val == 0 or r.val == 1: return r.val
            if r.val == 2 :
                return evaluate(r.left) or evaluate(r.right)
            else :
                return evaluate(r.left) and evaluate(r.right)
        return evaluate(root)