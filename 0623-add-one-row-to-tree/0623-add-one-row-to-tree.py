# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def addOneRow(self, root: Optional[TreeNode], val: int, depth: int) -> Optional[TreeNode]:
        if depth == 1:
            node = TreeNode(val,root)
            return node
        depth-=1
        s = [(root,1)]
        temp = []
        while s :
            node, d = s.pop(0)
            if d > depth:
                break
            elif d == depth :
                temp.append(node)
            if node.left: s.append((node.left,d+1))
            if node.right: s.append((node.right,d+1))
                
        while temp:
            node = temp.pop()
            if node.left :
                node.left = TreeNode(val,node.left)
            if node.right :
                node.right = TreeNode(val,None,node.right)
            if not node.left:
                node.left=TreeNode(val)
            if not node.right :
                node.right=TreeNode(val)
                
        return root