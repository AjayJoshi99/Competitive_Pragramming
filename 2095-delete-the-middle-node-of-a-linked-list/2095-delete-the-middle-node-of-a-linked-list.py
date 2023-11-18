# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head or not head.next : return None
        count = 0 
        ptr = head 
        while ptr :
            count+=1
            ptr = ptr.next    
        count =count//2 - 1
        ptr = head
        while count :
            ptr = ptr.next
            count-=1
        ptr.next = ptr.next.next
        ptr = None
        return head
            
        