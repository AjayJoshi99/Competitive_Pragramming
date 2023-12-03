# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        if not root : return root
        if root.left : self.flatten(root.left)
        temp = root.right
        root2 = root
        root.right = root.left
        root.left = None
        while root.right :
            root = root.right
        root.right = temp
        if root2.right : self.flatten(root2.right)
        return root
            
        