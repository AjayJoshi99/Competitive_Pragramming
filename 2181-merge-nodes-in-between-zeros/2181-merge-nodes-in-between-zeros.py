# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        ptr = head
        l = list()
        while ptr.next:
            temp = 0
            ptr= ptr.next
            while ptr.val != 0 :
                temp += ptr.val
                ptr = ptr.next
            l.append(temp)
        ptr = head
        size = len(l)
        for i in l :
            ptr.val = i
            size -=1 
            if size != 0 :
                ptr = ptr.next
                
        ptr.next = None
        return head
        
            
        