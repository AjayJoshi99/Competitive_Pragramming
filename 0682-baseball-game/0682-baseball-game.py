class Solution:
    def calPoints(self, operations: List[str]) -> int:
        s = []
        for i in operations:
            if i =='+':
                t = s[-1]+s[-2]
                s.append(t)
            elif i == 'D':
                t = s[-1]*2
                s.append(t)
            elif i == 'C':
                s.pop()
            else:
                s.append(int(i))
        return sum(s)
            