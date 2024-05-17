# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def removeLeafNodes(self, root: Optional[TreeNode], target: int) -> Optional[TreeNode]:
        def rm(r):
            if not r : return False
            if rm(r.left) :
                r.left = None
            if rm(r.right):
                r.right = None 
            if not r.right and not r.left and r.val == target:
                return True
            return False
        if rm(root): return None
        return root