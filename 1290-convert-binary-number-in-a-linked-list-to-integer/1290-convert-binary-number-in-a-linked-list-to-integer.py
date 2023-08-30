# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        num = 0
        curr = head
        nxt = curr.next
        pre = None
        #reverse a linkedlist
        while curr.next :
            curr.next = pre
            pre = curr
            curr = nxt
            nxt = nxt.next
        curr.next = pre
        head = curr
        #binary to decimal
        ptr = head
        multi = 1
        while ptr:
            num = num + ptr.val * multi
            multi*=2
            ptr = ptr.next   
        return num
            