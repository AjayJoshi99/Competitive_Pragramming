# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head :
            return None
        if not head.next :
            return head
        dummyNode = ListNode(0,head)
        ptr = dummyNode
        temp = inf
        while ptr.next and ptr.next.next :
            if ptr.next.val == ptr.next.next.val or ptr.next.val == temp:
                temp = ptr.next.val
                ptr.next = ptr.next.next
            else :
                ptr = ptr.next
        if ptr.next.val == temp :
            ptr.next = None
        return dummyNode.next