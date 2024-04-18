class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        row , col = len(grid) , len(grid[0])
        c = 0
        for i in range(row):
            for j in range(col):
                if grid[i][j] == 1:
                    if i == 0 :
                        c += 1
                    elif grid[i - 1][j] == 0:
                        c += 1
                    if i == row - 1:
                        c += 1
                    elif grid[i + 1][j] == 0:
                        c += 1
                    if j == col - 1:
                        c += 1
                    elif grid[i][j + 1] == 0:
                        c += 1
                    if j == 0:
                        c += 1
                    elif grid[i][j - 1] == 0:
                        c += 1
        return c
        
                    