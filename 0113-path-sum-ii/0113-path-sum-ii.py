# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        l = []
        temp = []
        def dfs(r):
            if not r : return None
            temp.append(r.val)
            if not r.right and not r.left and sum(temp) == targetSum :
                l.append(list(temp))
            else :
                dfs(r.left) 
                dfs(r.right)
            temp.pop()
        dfs(root)
        return l
            