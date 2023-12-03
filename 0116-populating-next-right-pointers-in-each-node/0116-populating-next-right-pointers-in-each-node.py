"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""
class Solution:
    def connect(self, root: 'Optional[Node]') -> 'Optional[Node]':
        if not root : return root
        q = list()
        q.append(root)
        while q:
            temp = []
            t = len(q)
            for i in range(t):
                node = q.pop(0)
                if i == t-1:
                    node.next = None
                else :
                    node.next = q[0]
                if node.right :
                    q.append(node.left)
                    q.append(node.right)
                   
        return root