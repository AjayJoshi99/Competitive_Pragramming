class Solution(object):
    def maxDepth(self, s):
        c = 0 
        mx = 0
        for i in s :
            if i == '(': c+=1
            elif i == ')':
                if mx < c:
                    mx = c
                c-=1
        return mx
        