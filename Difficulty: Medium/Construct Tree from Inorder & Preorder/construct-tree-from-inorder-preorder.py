#User function Template for python3

'''
# Node class
class Node:
    def __init__(self,val):
        self.data = val
        self.right = None
        self.left = None

'''
# Note: Build tree and return root node
class Solution:
    def buildTree(self, inorder, preorder):
        index_map = {val: idx for idx, val in enumerate(inorder)}
        pre_idx = 0

        def construct(in_left, in_right):
            nonlocal pre_idx
            if in_left > in_right:
                return None
            
            root_val = preorder[pre_idx]
            root = Node(root_val)
            pre_idx += 1
            
            root.left = construct(in_left, index_map[root_val] - 1)
            root.right = construct(index_map[root_val] + 1, in_right)
            
            return root

        return construct(0, len(inorder) - 1)

    def postOrder(self, root):
        if root is None:
            return []
        return self.postOrder(root.left) + self.postOrder(root.right) + [root.data]



#{ 
 # Driver Code Starts
#Initial Template for Python 3


class Node:

    def __init__(self, val):
        self.data = val
        self.right = None
        self.left = None


def printPostorder(n):
    if n is None:
        return
    printPostorder(n.left)
    printPostorder(n.right)
    print(n.data, end=' ')


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        inorder = [int(x) for x in input().split()]
        preorder = [int(x) for x in input().split()]

        root = Solution().buildTree(inorder, preorder)
        printPostorder(root)
        print()

# } Driver Code Ends