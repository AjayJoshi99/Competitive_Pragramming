class Solution:
    def leaders(self, arr):
        ans = []
        stack = []
        ans.append(arr[-1])
        stack.append(arr[-1])
        for i in range(len(arr)-2, -1, -1):
            while len(stack) > 0  and stack[-1]<=arr[i]: 
                stack.pop()
            if len(stack) == 0 : 
                ans.append(arr[i])
                stack.append(arr[i])
        ans.reverse()
        return ans