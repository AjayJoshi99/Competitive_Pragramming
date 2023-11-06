# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        front = head 
        rear = head
        c = 0 
        while front :
            c +=1
            front = front.next        
        c = c-k+1
        front = head
        while k :
            k-=1
            if k > 0:
                front = front.next 
        while c!=1 :
            rear=rear.next
            c-=1
        rear.val,front.val = front.val, rear.val
        return head
                