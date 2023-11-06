# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        s = set()
        ptr = head
        
        while ptr :
            if ptr in s :
                return True
            s.add(ptr)
            ptr = ptr.next
        return False