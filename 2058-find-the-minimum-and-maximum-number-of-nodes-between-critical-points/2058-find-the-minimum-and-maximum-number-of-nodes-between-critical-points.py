# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def nodesBetweenCriticalPoints(self, head: Optional[ListNode]) -> List[int]:
        ptr = head.next
        prev = head
        l = []
        count = 1
        while ptr.next:
            if prev.val> ptr.val and ptr.next.val>ptr.val:
                l.append(count)
            elif prev.val<ptr.val and ptr.next.val<ptr.val:
                l.append(count)
            count+=1
            prev = ptr
            ptr = ptr.next
            
        if len(l)<2: return[-1,-1]
        mx = l[-1]-l[0]
        mn = 10**7
        for i in range(len(l)-1):
            mn = min(mn,l[i+1]-l[i])
        return [mn,mx]
            
        