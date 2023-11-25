# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        l= list()
        q = []
        q.append(root)
        while q:
            node = q.pop()
            l.append(node.val)
            if node.left : q.append(node.left)
            if node.right : q.append(node.right)
        for i in range(len(l)) :
            if k-l[i] in l[i+1:] :
                return True
        return False
            