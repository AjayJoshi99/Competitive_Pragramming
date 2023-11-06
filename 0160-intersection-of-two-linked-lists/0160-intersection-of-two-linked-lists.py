# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        s1 = set()
        
        ptr1 = headA
        ptr2 = headB
        
        while ptr1 :
            s1.add(ptr1)
            ptr1 = ptr1.next
            
        while ptr2:
            if ptr2 in s1:
                return ptr2
            ptr2 = ptr2.next
                
        return None