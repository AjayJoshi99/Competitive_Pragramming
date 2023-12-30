class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        op = False
        irpc = 0
        ans = ""
        for i in range(len(s)):
            if not op and s[i]=="(":
                op = True
            elif op :
                if irpc == 0 and s[i]==")":
                    op = False
                else :
                    if s[i]==")":
                        irpc -= 1
                    elif s[i]=="(":
                        irpc +=1
                    ans += s[i]
        return ans
                
                
            
        
        