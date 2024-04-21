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
        
        q = [source]
        while q:
            curr = q.pop(0)  
            if curr == destination:  
                return True
            elif curr in d and not visited[curr]:
                q.extend(d[curr])  
            visited[curr] = 1 
        return False 
        
        
       
            