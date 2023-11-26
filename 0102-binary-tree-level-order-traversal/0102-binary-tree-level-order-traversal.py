# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from queue import Queue
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root : return []
        l = list()
        curr_lvl = 0
        q = Queue()
        q.put((root,0))
        temp = []
        while not q.empty():
            node , level = q.get()
            if level != curr_lvl :
                l.append(temp)
                curr_lvl = curr_lvl +1
                temp = [node.val]
            else :
                temp.append(node.val)
            if node.left : q.put((node.left,level + 1))
            if node.right : q.put((node.right, level +1))
        l.append(temp)  
        return l