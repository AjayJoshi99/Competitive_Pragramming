class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        l = []
        d = {}
        for i,j in edges:
            l.append(i)
            l.append(j)
        for i in l:
            if i in d: d[i]+=1
            else:
                d.update({i:1})
        item,max=0,0
        for i in d:
            if d[i]>max:
                max = d[i]
                item = i
        return item
                