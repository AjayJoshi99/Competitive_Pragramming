"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def postorder(self, root: 'Node') -> List[int]:
        if not root: return []
        stack = [root]
        output = []
        while stack:
            top = stack.pop()
            output.append(top.val)
            stack.extend(top.children)
        return reversed(output)