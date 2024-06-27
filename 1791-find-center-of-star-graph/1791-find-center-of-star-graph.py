class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        n = len(edges)
        l = []
        for i,j in edges:
            l.append(i)
            l.append(j)
        for i in l:
            if l.count(i) == n: return i
       
                