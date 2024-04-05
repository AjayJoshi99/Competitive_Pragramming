class Solution:
    def makeGood(self, s: str) -> str:
        stack = []
        for c in s: 
            if stack and abs(ord(stack[-1]) - ord(c)) == 32: stack.pop() 
            else: stack.append(c)
        return "".join(stack)
    
        # stack = []
        # for i in range(len(s)):
        #     if 'A'<= s[i]<= 'Z' and stack and stack[-1] == s[i].lower():
        #         stack.pop()
        #     elif 'a'<= s[i]<= 'z' and stack and stack[-1] == s[i].upper():
        #         stack.pop()
        #     else :
        #         stack.append(s[i])
        # return ''.join(stack)
                