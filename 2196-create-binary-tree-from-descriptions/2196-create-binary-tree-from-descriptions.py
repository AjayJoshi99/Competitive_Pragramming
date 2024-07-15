# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def createBinaryTree(self, descriptions: List[List[int]]) -> Optional[TreeNode]:
        child = set()
        nodes = {}
        for p, c, left in  descriptions:
            nodes[p] = TreeNode(p) if p not in nodes else nodes[p]
            nodes[c] = TreeNode(c) if c not in nodes else nodes[c]
            if left:
                nodes[p].left = nodes[c]
            else:
                nodes[p].right = nodes[c]
            child.add(c)
        for d in descriptions:
            if d[0] not in child:
                return nodes[d[0]]
        return None
        