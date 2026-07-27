import math

class Solution:
    def constructBinaryTree(self, pre, preMirror):
        if not pre or not preMirror:
            return None
            
        root = Node(pre[0])
        
        if len(pre) == 1:
            return root
            
        left_child_val = pre[1]

        idx = preMirror.index(left_child_val)
        
        left_size = len(preMirror) - idx
        
        root.left = self.constructBinaryTree(
            pre[1 : 1 + left_size], 
            preMirror[idx:]
        )
        root.right = self.constructBinaryTree(
            pre[1 + left_size :], 
            preMirror[1 : idx]
        )
        
        return root
