class Solution:
    def calPoints(self,operations: List[str]) -> int:
        s = []
        for i in operations:
            if i =='+':
                s.append(s[-1]+s[-2])
            elif i == 'D':
                s.append(s[-1]*2)
            elif i == 'C':
                s.pop()
            else:
                s.append(int(i))
        return sum(s)
            