# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        if not head:
            return
        stack=[]
        node=head
        while node:
            stack.append(node)
            node=node.next
        node=head
        for i in range(len(stack)//2):
            n=stack.pop()
            t=node.next
            node.next=n
            n.next=t
            node=t
        node.next=None  
        return head
        
        