# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        ptr = l1
        num1 = 0
        num2 = 0
        while ptr :
            num1 = num1*10 + ptr.val
            ptr = ptr.next
        l1 = None
        ptr = l2
        while ptr :
            num2 = num2*10 + ptr.val
            ptr = ptr.next
        l2 = None
        s = str(num1+num2)
        s = s[::-1]
        head = None
        for i in s:
            head = ListNode(i,head)
            
        return head