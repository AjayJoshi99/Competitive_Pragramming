# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from queue import Queue
class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        l1 = list()
        l2 = list()
        def leaf(node, l):
            if not node.right and not node.left :
                    l.append(node.val)
            if node.left : leaf(node.left,l)
            if node.right : leaf(node.right,l)    
            return l
        l1 = leaf(root1,l1)
        l2 = leaf(root2,l2)
        return l1 == l2 
        
      
    