# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxPathSum(self, root: Optional[TreeNode]) -> int:
        max_sum = -inf
        def dfs(r):
            nonlocal max_sum
            if not r : return 0
            l_sum = dfs(r.left)
            r_sum = dfs(r.right)
            max_sum = max(max_sum, l_sum + r_sum + r.val ,l_sum +  r.val, r_sum + r.val,r.val)
            return max(r.val , l_sum+r.val, r_sum+r.val)
        dfs(root)
        return max_sum 