#User function Template for python3
'''
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    def reverse(self, head):
        if head is None:
            return None
        prev=None
        curr=head
        while curr:
            next=curr.next
            curr.next=prev
            prev=curr
            curr=next
            if curr==head:
                break
        head.next=prev
        return prev
        
    def deleteNode(self, head, key):
        if head is None:
            return None
        curr=head
        ptr=curr
        temp=curr.next
        if head.data==key:
            while ptr.next!=head:
                ptr=ptr.next
            ptr.next=temp
            return temp
        while temp!=head:
            if temp.data==key:
                ptr.next=temp.next
                return head
            ptr=temp
            temp=temp.next
        return head
        


#{ 
 # Driver Code Starts
class Node:

    def __init__(self, data):
        self.data = data
        self.next = None


def printList(head):
    if head is None:
        print("empty")
        return

    temp = head
    while True:
        print(temp.data, end=" ")
        temp = temp.next
        if temp == head:
            break
    print()


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        arr = list(map(int, input().split()))
        key = int(input())

        head = Node(arr[0])
        tail = head
        for i in range(1, len(arr)):
            tail.next = Node(arr[i])
            tail = tail.next
        tail.next = head  # Make the list circular

        ob = Solution()
        head = ob.deleteNode(head, key)
        head = ob.reverse(head)
        printList(head)

# } Driver Code Ends