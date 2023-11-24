# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from queue import Queue
class Solution:
    def isUnivalTree(self, root: Optional[TreeNode]) -> bool:
            q = Queue()
            q.put(root)
            val = root.val
            while not q.empty():
                node = q.get()
                if node.val != val : return False
                if node.left : q.put(node.left)
                if node.right : q.put(node.right)
                    
                    
            return True
                