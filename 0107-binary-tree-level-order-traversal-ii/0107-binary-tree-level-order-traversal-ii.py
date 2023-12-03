# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque

class Solution:
    def levelOrderBottom(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root : return []
        output = list()
        q = deque()
        q.append(root)
        while q:
            temp = list()
            t = len(q)
            for i in range(t):
                node = q.popleft()
                temp.append(node.val)
                if node.left : q.append(node.left)
                if node.right : q.append(node.right)
            output.insert(0,temp)
        return output