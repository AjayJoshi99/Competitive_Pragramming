# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    s = 0
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        self.find(root,0)
        return self.s
        
    def find(self,root,t):
        if not root.left and not root.right: 
            self.s = self.s + t*10 + root.val
        else :
            t = t*10 + root.val
            if root.left : 
                self.find(root.left,t)
            if root.right :
                self.find(root.right,t)
        