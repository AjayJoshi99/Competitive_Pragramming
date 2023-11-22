# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from queue import Queue
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return true;
        return self.isSame(root.left, root.right)
    def isSame(self, leftroot, rightroot):
        if leftroot == None and rightroot == None:
            return True
        if leftroot == None or rightroot == None:
            return False
        if leftroot.val != rightroot.val:
            return False

        return self.isSame(leftroot.left, rightroot.right) and self.isSame(leftroot.right, rightroot.left)
        
        
        
#         if not root or not root.right and not root.left : return True
#         if not root.right and root.left or not root.left and root.right : return False
#         q1 = Queue()
#         q2 = Queue()
#         r1 = root.left
#         r2 = root.right
#         q1.put(r1)
#         q2.put(r2)
#         while not q1.empty() and not q2.empty() :
#             n1 , n2 = q1.get(),q2.get()
#             if n1.val != n2.val : return False
#             if ( n1.left and not n2.right ) or ( not n1.left and n2.right ) : return False
#             if ( n1.right and not n2.left ) or ( not n1.right and n2.left ) : return False
#             if n1.left :
#                 q1.put(n1.left)
#                 q2.put(n2.right)
#             if n1.right :
#                 q1.put(n1.right)
#                 q2.put(n2.left)
                
#         return True