# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        l = list()
        ptr = head 
        
        while ptr:
            l.append(ptr.val)
            ptr = ptr.next
            
        i = 0
        j = len(l)-1
        while i < j:
            if l[i] != l[j] :
                return False
            i+=1
            j-=1
            
        return True