class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        l = len(num)
        if l == k : return '0'
        stack = []
        for x in num:
            while stack and k and  stack[-1]> x:
                stack.pop()
                k-=1
            if stack or x != '0':
                stack.append(x)
        if k :
            stack = stack[:-k]
        return ''.join(stack) or '0'
        