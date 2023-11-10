# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        l = list()
        ptr = head
        while ptr :
            l.append(ptr.val)
            ptr = ptr.next   
        i = 0 
        j = len(l) - 1
        max_sum = 0
        while i < j:
            temp = l[i]+l[j]
            if temp > max_sum :
                max_sum = temp 
            i+=1
            j-=1
        return max_sum
