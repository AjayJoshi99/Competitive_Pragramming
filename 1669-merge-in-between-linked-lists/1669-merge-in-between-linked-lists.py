# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeInBetween(self, list1: ListNode, a: int, b: int, list2: ListNode) -> ListNode:
        ptr1 = list1 
        a-=1
        while a :
            a -= 1
            ptr1 = ptr1.next
            
        ptr2 = list1
        while b:
            b -= 1
            ptr2 = ptr2.next
            
        tail = list2
        while tail.next :
            tail = tail.next    
        tail.next = ptr2.next
        ptr1.next = list2  
        return list1