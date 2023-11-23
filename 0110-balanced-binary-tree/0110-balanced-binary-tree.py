# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        return self.check(root) >= 0
    
    def check(self,root):
        if not root : return 0
        lh = self.check(root.left)
        rh = self.check(root.right)
        if lh < 0 or rh < 0 or abs(lh - rh) > 1:  return -1
        return max(lh,rh) + 1
        
        