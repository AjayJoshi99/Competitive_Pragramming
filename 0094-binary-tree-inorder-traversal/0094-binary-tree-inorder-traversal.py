# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if root is None: return []
        l = list()
        def inorder(r):
            if r.left :
                inorder(r.left)
            l.append(r.val)
            if r.right :
                inorder(r.right)
        inorder(root)
        return l