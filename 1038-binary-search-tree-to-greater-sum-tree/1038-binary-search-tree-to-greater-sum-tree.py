# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def bstToGst(self, root: TreeNode) -> TreeNode:
        l = []
        d = {}
        def lvl_ord(r):
            if r.left :lvl_ord(r.left)
            l.append(r.val)
            if r.right : lvl_ord(r.right)
                
        lvl_ord(root)
        d.update({l[-1]:l[-1]})
        for i in range(len(l)-2,-1,-1):
            d.update({l[i]:l[i]+l[i+1]})
            l[i] += l[i+1]
            
        def change(r):
            if not r: return 
            change(r.left)
            r.val = d[r.val]
            change(r.right)
        change(root)
        return root