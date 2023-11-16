# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
      
class Solution:
    def doubleIt(self, head: Optional[ListNode]) -> Optional[ListNode]:
        num = 0 
        ptr = head
        while ptr :
            num = num*10 + ptr.val 
            ptr = ptr.next
        num *= 2
        ptr = head
        while ptr :
            ptr.val = num%10
            num //= 10
            ptr = ptr.next
            
        prev = None
        curr = head 
        nxt = head.next
        
        while curr.next :
            curr.next = prev
            prev = curr
            curr = nxt 
            nxt = nxt.next
            
        curr.next = prev
        
        if num :
            node = ListNode(num,None)
            node.next =curr
            curr = node
            
        return curr
            
        
                