# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    hl = 0
    val = 0
    def findBottomLeftValue(self, root: Optional[TreeNode]) -> int:
        self.find(root,1)
        return self.val
        
    def find(self,root,lvl):
        if not root : return 
        if self.hl < lvl :
            self.val = root.val
            self.hl = lvl 
        self.find(root.left,lvl+1)
        self.find(root.right,lvl+1)