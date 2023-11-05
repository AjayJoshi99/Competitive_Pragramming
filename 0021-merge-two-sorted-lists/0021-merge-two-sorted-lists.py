# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        head1 = list1
        head2 = list2
        if head1 == None:
            return head2
        if head2 ==None:
            return head1
        
        if head1.val > head2.val :
            head = head2
        else:
            head = head1
            
        while head1 and head2 :
            if head1.val <= head2.val :
                temp1 = head1
                temp2 = None
                while temp1 and temp1.val <= head2.val:
                    temp2 = temp1
                    temp1 = temp1.next
                
                head1 = temp2.next
                temp2.next = head2
            elif head1.val > head2.val :
                temp1 = head2
                temp2 = None
                while temp1 and temp1.val <= head1.val:
                    temp2 = temp1
                    temp1 = temp1.next
                
                head2 = temp2.next
                temp2.next = head1
                    
                
                
         
        return head  