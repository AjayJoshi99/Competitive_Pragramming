class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        s = []
        res = []
        def helper(openN,closeN):
            if openN==closeN==n:
                res.append("".join(s))
                return
            if openN<n:
                s.append('(')
                helper(openN+1,closeN)
                s.pop()
            if closeN<openN:
                s.append(')')
                helper(openN,closeN+1)
                s.pop()
        helper(0,0)
        return res