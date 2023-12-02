# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    val = None
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        self.find(root,p,q)
        return self.val
    
    def find(self,root,p,q):
        if not root : return 0
        l = self.find(root.left,p,q)
        r = self.find(root.right,p,q)
        if l and r :
            self.val = root
        elif root.val == p.val or root.val == q.val :
            if l or r :
                self.val = root
            else :
                return 1
        return l or r 