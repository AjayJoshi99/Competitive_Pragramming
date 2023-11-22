# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        if not root : return False
        return self.check(root, targetSum, 0)
        
    def check(self, root, targetSum, currentSum):
        currentSum += root.val
        if not root.right and not root.left and targetSum == currentSum : return True
        if not root.right and not root.left and targetSum != currentSum : 
            currentSum -= root.val
            return False
        if root.left :
            if self.check(root.left, targetSum, currentSum) : return True
        if root.right :
            if self.check(root.right, targetSum, currentSum) : return True
            
        currentSum -= root.val
        return False
        
        