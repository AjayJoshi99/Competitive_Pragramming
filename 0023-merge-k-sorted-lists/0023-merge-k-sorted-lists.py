# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
                l = list()
                for i in lists :
                    ptr = i 
                    while ptr :
                        l.append(ptr.val) 
                        ptr = ptr.next
                l.sort() 
                head = None
                for i in reversed(l) :
                    head = ListNode(i,head)
                        
                return head
                
                
                