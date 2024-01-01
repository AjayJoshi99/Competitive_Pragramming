class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for i in tokens:
            if i not in '/+-*' :
                stack.append(int(i))
            else :
                a = stack.pop()
                b = stack.pop()
                match i :
                    case '+':
                        stack.append(a+b)
                    case '*': 
                        stack.append(a*b)
                    case '-':
                        stack.append(b-a)
                    case '/':
                        stack.append(int(b/a))
        return stack[0]