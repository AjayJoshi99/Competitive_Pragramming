# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def mergeTrees(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root1 and not root2 : return None
        if not root1 and root2 : return root2
        if not root2 and root1 : return root1
           
        def createTree(r1,r2,r):
            if not r1 and not r2 : r = None
            elif r1 and not r2 : r = TreeNode(r1.val)
            elif r2 and not r1 : r = TreeNode(r2.val)
            else : r = TreeNode(r1.val+r2.val)
            
            if r1 and r2 :
                r.left = createTree(r1.left,r2.left,r)
                r.right = createTree(r1.right,r2.right,r)
            elif not r1 and r2 :
                r.left = createTree(None,r2.left,r)
                r.right = createTree(None,r2.right,r)
            elif r1 and not r2 :
                r.left = createTree(r1.left,None,r)
                r.right = createTree(r1.right,None,r)
            return r
        return createTree(root1,root2,None)
        
        