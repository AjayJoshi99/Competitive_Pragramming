class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        s = list(s)
        stack = []
        for i, char in enumerate(s):
            if char == '(':
                stack.append(i)
            elif char == ')':
                if stack:
                    stack.pop()
                else:
                    s[i] = ''
        while stack:
            s[stack.pop()] = ''
        return ''.join(s)
    
    """def minRemoveToMakeValid(self, s: str) -> str:
        o = 0
        temp = ''
        for i in s:
            if i == '(': 
                o+=1
                temp += i
            elif i == ')' and o!=0:
                if o : o-=1
                temp += i
            elif i != ')' : 
                temp += i
        ans = ''
        for i in range(len(temp)-1,-1,-1):
            if o and temp[i] == '(':
                o-=1
            else:
                ans+=temp[i]
        return ans[::-1]"""
        
            