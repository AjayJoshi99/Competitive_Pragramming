
from typing import List


class Solution:
    def __init__(self):
        self.ans = 0

    def dfs(self, v, vis, adj):
        cnt = 0
        res = 0
        vis[v] = True
        for u in adj[v]:
            if not vis[u]:
                res = self.dfs(u, vis, adj)
                if res % 2 == 0:
                    self.ans += 1
                else:
                    cnt += res
        return cnt + 1

    def minimumEdgeRemove(self, n: int, edges: List[List[int]]) -> int:
        counts = [0]*(n+1)
        graph = [[] for _ in range(n+1)]
        for u,v in edges:
            graph[u].append(v)
            graph[v].append(u)
        self.dfs(1, counts, graph)
        return self.ans
            



#{ 
 # Driver Code Starts
class IntMatrix:

    def __init__(self) -> None:
        pass

    def Input(self, n, m):
        matrix = []
        #matrix input
        for _ in range(n):
            matrix.append([int(i) for i in input().strip().split()])
        return matrix

    def Print(self, arr):
        for i in arr:
            for j in i:
                print(j, end=" ")
            print()


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        n = int(input())

        edges = IntMatrix().Input(n - 1, 2)

        obj = Solution()
        res = obj.minimumEdgeRemove(n, edges)

        print(res)

# } Driver Code Ends