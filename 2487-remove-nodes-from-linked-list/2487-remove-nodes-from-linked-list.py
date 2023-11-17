# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode(inf)
        stack = [dummy]
        node = head
        while node: 
            while stack[-1].val < node.val: stack.pop()
            stack[-1].next = node
            stack.append(node)
            node = node.next 
        return dummy.next
                
        