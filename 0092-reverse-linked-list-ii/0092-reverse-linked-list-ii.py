# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head: Optional[ListNode], left: int, right: int) -> Optional[ListNode]:
        l = list()
        ptr = head
        k = left - 1
        m = right - left + 1
        while k :
            ptr = ptr.next
            k-=1
        temp = ptr
        
        while ptr and m :
            l.append(ptr.val)
            ptr = ptr.next
            m-=1
  
        for i in reversed(l):
            temp.val = i
            temp = temp.next
            
        return head
        
        