class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        def findMax(r,c):
            ans = 0
            for i in range(r,r+3):
                for j in range(c,c+3):
                    if ans < grid[i][j]: ans = grid[i][j]
            return ans
        r = len(grid)
        c = len(grid[0])
        l = [[0]*(r-2) for _ in range(c-2)]
        for i in range(r):
            if i+3 > r: break
            for j in range(c):
                if j+3 > c: break
                l[i][j] = findMax(i,j)
        return l
                    
                