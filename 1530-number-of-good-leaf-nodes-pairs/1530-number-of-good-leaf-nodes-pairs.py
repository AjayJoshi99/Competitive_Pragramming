# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def countPairs(self, root: TreeNode, distance: int) -> int:
        def postOrder(node: TreeNode) -> List[int]:
            if not node:
                return [0] * 12
            if not node.left and not node.right:
                current = [0] * 12
                current[0] = 1
                return current
            
            left = postOrder(node.left)
            right = postOrder(node.right)
            
            current = [0] * 12
            
            for i in range(10):
                current[i + 1] += left[i] + right[i]
            
            current[11] += left[11] + right[11]
            
            for d1 in range(distance + 1):
                for d2 in range(distance + 1):
                    if 2 + d1 + d2 <= distance:
                        current[11] += left[d1] * right[d2]
            
            return current
        
        return postOrder(root)[11]
        