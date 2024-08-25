# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        l = list()
        def postOrder(node : Optional[TreeNode]) -> None:
            if not node: return 
            postOrder(node.left)
            postOrder(node.right)
            l.append(node.val)
        postOrder(root)
        return l