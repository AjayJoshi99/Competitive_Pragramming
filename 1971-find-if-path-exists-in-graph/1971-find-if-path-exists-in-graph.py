class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        if source == destination: return True 
        d = {}
        visited = [0]*n
        
        for i,j in edges:
            if i in d : d[i].append(j)
            else: d[i] = list([j])
                
            if j in d : d[j].append(i)
            else: d[j] = list([i])
        
        def DFS(k):
            if k not in d: return False
            visited[k] = 1
            for i in d[k]:
                if i == destination:
                    return True
                else:
                    if visited[i]==0:
                        if DFS(i): return True
            return False
        
        return DFS(source)
       
            