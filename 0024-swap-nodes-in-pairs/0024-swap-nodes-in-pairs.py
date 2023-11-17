# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head :
            return None
        if not head.next :
            return head
        prev = None
        curr = head
        nxt = curr.next
        head = nxt
        curr.next = nxt.next
        nxt.next = curr
        while curr.next:
            prev = curr
            curr = curr.next
            nxt = curr.next
            if curr.next:
                curr.next = nxt.next
                nxt.next = curr
                prev.next = nxt
        return head   