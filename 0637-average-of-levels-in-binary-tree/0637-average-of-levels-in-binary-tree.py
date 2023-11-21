# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from queue import Queue
class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        ans = list()
        l = dict()
        q = Queue()
        q.put((root,0))
        while not q.empty() :
            node,level = q.get()
            if level in l :
                l[level].append(node.val)
            else :
                l.update({level:[node.val]})    
            if node.left : q.put((node.left,level+1))
            if node.right : q.put((node.right, level + 1))
                
        for i in l :
            ans.append(sum(l[i])/len(l[i]))
            
        return ans