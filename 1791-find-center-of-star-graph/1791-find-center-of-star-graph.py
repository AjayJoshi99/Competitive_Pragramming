class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        d = {}
        for i,j in edges:
            if i in d: d[i]+=1
            else: d.update({i:1})
            if j in d: d[j]+=1
            else: d.update({j:1})
        item,max=0,0
        for i in d:
            if d[i]>max:
                max = d[i]
                item = i
        return item
                