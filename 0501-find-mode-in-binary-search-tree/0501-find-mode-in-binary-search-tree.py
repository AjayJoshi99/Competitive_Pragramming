# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        d = {}
        s = [root]
        while s :
            node = s.pop()
            if node.val in d :
                d[node.val]+=1
            else :
                d.update({node.val:1})
            if node.left : s.append(node.left)
            if node.right : s.append(node.right)
                
        m = max(list(d.values()))
        l =[]
        for i in d:
            if d[i]==m:
                l.append(i)
        return l
        