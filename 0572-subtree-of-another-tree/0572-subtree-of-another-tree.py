# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        root2 = []
        def find_root(r):
            nonlocal root2
            if r.left : find_root(r.left)
            if r.val == subRoot.val : 
                root2.append(r)
            if r.right : find_root(r.right)
        
        def check(r1,r2):
            if not r1 and not r2 : return True
            if ( not r1 and r2 ) or (r1 and not r2) : return False
            
            return (r1.val == r2.val) and check(r1.right,r2.right) and check(r1.left,r2.left)
        
        find_root(root)
        for i in root2 :
            if check(i,subRoot): return True
        return False