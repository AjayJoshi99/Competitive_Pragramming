# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    sum_ = 0
    def findTilt(self, root: Optional[TreeNode]) -> int:
        self.find_sum(root)
        return self.sum_
    def find_sum(self,root):
        if not root : return 0
        ls = self.find_sum(root.left)
        rs = self.find_sum(root.right)
        self.sum_ += abs(ls-rs)     
        return ls+rs+root.val
            