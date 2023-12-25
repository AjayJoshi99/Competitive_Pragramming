class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for i in s :
            if i in ['(','{','[']:
                stack.append(i)
            else :
                if len(stack) == 0 : return False
                temp = stack.pop()
                if (i == ')' and temp != '(') or (i == ']' and temp != '[') or (i == '}' and temp != '{' ) : 
                    return False
                
        if len(stack) != 0 : return False
        return True