# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        count = 0 
        ptr = head 
        while ptr:
            ptr = ptr.next
            count+=1
        if count == n :
            return head.next
        count = count - n 
        ptr = head
        while count != 1 :
            count-=1
            ptr = ptr.next
        ptr.next = ptr.next.next
        return head 