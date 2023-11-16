# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        ptr = head
        
        while ptr :
            temp = ptr
            while temp :
                if temp.val < ptr.val :
                    ptr.val, temp.val = temp.val, ptr.val
                temp = temp.next
                
            ptr = ptr.next 
            
        return head