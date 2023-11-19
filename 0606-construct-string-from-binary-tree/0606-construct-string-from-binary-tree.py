# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def tree2str(self, root: Optional[TreeNode]) -> str:
        self.s = ''
        
        def dfs(r):
            if r:
                self.s += str(r.val)
                
                if not r.left and not r.right: return
                
                self.s += '('
                dfs(r.left)
                self.s += ')'
                
                if r.right:
                    self.s += '('
                    dfs(r.right)
                    self.s += ')'
        
        dfs(root)
    
        return self.s
    
        