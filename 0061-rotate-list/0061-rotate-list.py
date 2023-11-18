# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head : return None
        if not head.next : return head
        length = 0 
        ptr = head
        while ptr :
            length +=1
            ptr = ptr.next  
        k = k%length
        length = length - k 
        ptr = head
        while length > 1 :
            ptr = ptr.next
            length -= 1
        temp = ptr.next
        ptr.next = None
        ptr = temp
        while ptr and ptr.next:
            ptr = ptr.next
        if ptr :
            ptr.next = head
            head = temp
        
        return head
        
        
    