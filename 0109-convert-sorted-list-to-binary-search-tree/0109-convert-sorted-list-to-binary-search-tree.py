# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sortedListToBST(self, head: Optional[ListNode]) -> Optional[TreeNode]:
        l= list()
        ptr = head 
        while ptr :
            l.append(ptr.val)
            ptr = ptr.next
            
        def createTree(num):
            if not num:
                return None

            mid = len(num) // 2

            root = TreeNode(num[mid])
            root.left = createTree(num[:mid])
            root.right = createTree(num[mid+1:])

            return root
        
        return createTree(l)