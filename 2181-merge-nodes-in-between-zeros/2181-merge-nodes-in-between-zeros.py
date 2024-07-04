# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        ptr = head
        p = head
        l = list()
        while ptr.next:
            temp = 0
            ptr= ptr.next
            while ptr.val != 0 :
                temp += ptr.val
                ptr = ptr.next
            p.val = temp
            p = p.next
        p.next = None
        temp = head
        while temp.next.next:
            temp = temp.next
        temp.next = None
        return head
        
            
        