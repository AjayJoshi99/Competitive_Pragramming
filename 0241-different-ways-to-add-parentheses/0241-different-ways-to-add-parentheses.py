class Solution:
    def diffWaysToCompute(self, e: str) -> List[int]:
        def helper(s):
            if s.isdigit():
                return [int(s)]
            res = []
            for i in range(len(s)):
                ch = s[i]
                if ch in '+*-':
                    left = helper(s[:i])
                    right = helper(s[i+1:])
                    for a in left:
                        for b in right:
                            if ch == '+':
                                res.append(a+b)
                            elif ch == '-':
                                res.append(a-b)
                            else:
                                res.append(a*b)
            return res  
        return helper(e)
                
   