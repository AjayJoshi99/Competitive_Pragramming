# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        c1=c2=0
        temp1,temp2=headA,headB
        #calculate no. of nodes in each list
        while temp1 or temp2:
            if temp1:
                c1+=1
                temp1=temp1.next
            if temp2:
                c2+=1
                temp2=temp2.next
        #find difference ans check which list has more nodes, move head of that list  in order to make both list's pointer to same position.   
        c=c1-c2
        if c<0:
            while c!=0:
                headB=headB.next
                c+=1
        else:
            while c!=0:
                headA=headA.next
                c-=1
                
        #both pointer will start to maving ahead by checking if their are equal. 
        while headA:
            if headA==headB:
                return headA
            headA=headA.next
            headB=headB.next
        return headA
        
      
        
        
        
        
        
        
        
        
        '''s1 = set()
        
        ptr1 = headA
        ptr2 = headB
        
        while ptr1 :
            s1.add(ptr1)
            ptr1 = ptr1.next
            
        while ptr2:
            if ptr2 in s1:
                return ptr2
            ptr2 = ptr2.next
                
        return None '''