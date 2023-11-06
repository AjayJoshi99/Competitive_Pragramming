# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
import math
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        count = 0 
        ptr = head 
        
        while ptr :
            count+=1
            ptr = ptr.next
        
        ptr = head 
        count = count//2
        while count :
            count -=1
            ptr = ptr.next
            
        return ptr