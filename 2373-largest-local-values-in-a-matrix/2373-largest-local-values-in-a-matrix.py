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
        l = []
        for i in range(r):
            if i+3 > r: break
            temp = []
            for j in range(c):
                if j+3 > c: break
                temp.append(findMax(i,j))
            l.append(temp)
        return l
                    
                