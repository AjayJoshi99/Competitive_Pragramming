# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def balanceBST(self, root: TreeNode) -> TreeNode:
        nums = []
        def inorder( node,nums):   
            if not node: return
            inorder( node.left, nums )
            nums.append( node.val )
            inorder( node.right, nums )
                        
        def balanced_BST( left, right, nums):
            if left > right:
                return None            
            else:
                mid = left + ( right - left ) // 2
                root = TreeNode( nums[mid] )
                root.left = balanced_BST( left, mid-1, nums)
                root.right = balanced_BST( mid+1, right, nums)
                return root        		
        inorder( root, nums )
        return balanced_BST( left = 0, right = len(nums)-1, nums = nums)