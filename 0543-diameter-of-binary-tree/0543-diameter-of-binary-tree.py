# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    currM = 0
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.func(root)
        return self.currM
        
    def func(self,r):
        if not r : return 0
        fl = self.func(r.left)
        fr = self.func(r.right)
        temp = fl + fr  
        if temp > self.currM : self.currM = temp
        return max(fl,fr) + 1
        