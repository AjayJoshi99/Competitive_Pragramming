from typing import List


class Solution:
    def MaxConnection(self, grid: List[List[int]]) -> int:
        def dfs(x, y, index):
            stack = [(x, y)]
            size = 0
            while stack:
                i, j = stack.pop()
                if visited[i][j]:
                    continue
                visited[i][j] = True
                size += 1
                component[i][j] = index
                for di, dj in directions:
                    ni, nj = i + di, j + dj
                    if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj] and grid[ni][nj] == 1:
                        stack.append((ni, nj))
            return size

        n = len(grid)
        directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        visited = [[False] * n for _ in range(n)]
        component = [[-1] * n for _ in range(n)]
        component_size = []
        
        index = 0
        for i in range(n):
            for j in range(n):
                if grid[i][j] == 1 and not visited[i][j]:
                    size = dfs(i, j, index)
                    component_size.append(size)
                    index += 1
        
        max_size = max(component_size, default=0)
        
        for i in range(n):
            for j in range(n):
                if grid[i][j] == 0:
                    seen_components = set()
                    size_after_change = 1
                    for di, dj in directions:
                        ni, nj = i + di, j + dj
                        if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] == 1:
                            comp_idx = component[ni][nj]
                            if comp_idx not in seen_components:
                                size_after_change += component_size[comp_idx]
                                seen_components.add(comp_idx)
                    max_size = max(max_size, size_after_change)
        
        return max_size


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

        grid = IntMatrix().Input(n, n)

        obj = Solution()
        res = obj.MaxConnection(grid)

        print(res)

# } Driver Code Ends