# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
import math
class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        ptr = head 
        while ptr.next:
            node = ListNode()
            node.val = math.gcd(ptr.val, ptr.next.val)
            temp = ptr.next
            ptr.next = node
            node.next = temp
            ptr = node.next
        return head
            