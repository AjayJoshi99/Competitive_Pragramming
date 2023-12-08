# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfSubtree(self, root) -> int:
        count=0
        def postorder(r):
            nonlocal count
            if not r : return 0,0
            s1,n1 = postorder(r.left)
            s2,n2= postorder(r.right)
            s =s1+s2+r.val
            n = n1+n2+1
            if r.val == s//n:
                count += 1
            return s,n
        postorder(root)
        return count