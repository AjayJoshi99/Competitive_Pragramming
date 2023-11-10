# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
from  math import gcd
class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        ptr = head 
        while ptr.next:
            node = ListNode()
            node.val = gcd(ptr.val, ptr.next.val)
            temp = ptr.next
            ptr.next = node
            node.next = temp
            ptr = node.next
        return head
            