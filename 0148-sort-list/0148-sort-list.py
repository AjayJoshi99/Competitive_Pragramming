# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        l = list()
        ptr = head
        while ptr:
            l.append(ptr.val)
            ptr = ptr.next
        ptr = head
        l.sort()
        for i in l :
            ptr.val = i
            ptr = ptr.next
            
        return head
        
            
                