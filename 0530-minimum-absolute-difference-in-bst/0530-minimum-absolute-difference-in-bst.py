# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def getMinimumDifference(self, root: Optional[TreeNode]) -> int:
        l = list()
        self.inorder(root,l)
        t = len(l)-1
        min_diff = inf
        for i in range(0,t):
            if l[i+1] - l[i] < min_diff :
                min_diff = l[i+1] - l[i]
        return min_diff
        
    def inorder(self,root,l):
        if root.left : self.inorder(root.left,l)
        l.append(root.val)
        if root.right : self.inorder(root.right,l)
        
                
                