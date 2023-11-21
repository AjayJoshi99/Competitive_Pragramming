# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumRootToLeaf(self, root: Optional[TreeNode]) -> int:
        ans = 0
        def num(r,s):
            nonlocal ans
            s+= str(r.val)
            if not r.left and not r.right:
                ans += int(s,2)
            if r.left:
                num(r.left,s)
            if r.right:
                num(r.right,s)
        num(root,"")
        return ans
    
    