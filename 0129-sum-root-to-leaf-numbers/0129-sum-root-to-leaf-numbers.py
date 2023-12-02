# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    s = 0
    def sumNumbers(self, root: Optional[TreeNode],t=0) -> int:
        if not root : return 
        t = t*10 + root.val
        if not root.left and not root.right: 
            self.s = self.s + t
        else :
            self.sumNumbers(root.left,t)    
            self.sumNumbers(root.right,t)
        return self.s           
        