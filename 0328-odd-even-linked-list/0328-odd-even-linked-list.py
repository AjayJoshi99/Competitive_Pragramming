# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def oddEvenList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next:
            return head
        odd = head 
        even = head.next 
        even_head = even 
        
        while even and even.next:
            odd.next = even.next
            odd = odd.next
            
            even.next = odd.next
            even = even.next

        odd.next = even_head
        
        return head
        
        '''
        odd = list()
        even = list()
        ptr = head 
        i = 1 
        while ptr :
            if i&1 == 0 :
                even.append(ptr.val)
            else :
                odd.append(ptr.val)
            ptr = ptr.next
            i+=1
            
        ptr = head
        
        for i in odd :
            ptr.val = i
            ptr = ptr.next
        for i in even :
            ptr.val = i
            ptr = ptr.next
          
        return head
        '''