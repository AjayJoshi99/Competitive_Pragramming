class Solution:
    def minLength(self, s: str) -> int:
        stack = []
        stack.append(s[0])
        top = 0
        for i in range(1,len(s)):
                if s[i] =='B' and top != -1 and stack[top]=='A':
                    stack.pop()
                    top-=1
                elif s[i] == 'D' and top != -1 and stack[top]=='C':
                    stack.pop()
                    top-=1
                else :
                    stack.append(s[i])
                    top+=1
                    
        return top+1
                
                
        
                
            