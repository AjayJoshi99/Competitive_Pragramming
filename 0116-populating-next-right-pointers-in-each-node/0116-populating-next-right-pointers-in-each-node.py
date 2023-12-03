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
        if not root:
            return None
        node = root 
        while node.left:
            head = node
            while head:
                head.left.next = head.right
                if head.next:
                    head.right.next = head.next.left
                head = head.next
            node = node.left
        return root
        '''
        if not root : return root
        q = [root]
        while q:
            t = len(q)
            for i in range(t):
                node = q.pop(0)
                if i != t-1:
                    node.next = q[0]    
                if node.right :
                    q.append(node.left)
                    q.append(node.right)  
        return root
        '''