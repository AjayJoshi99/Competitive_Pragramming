class Solution:
    row = 0
    col = 0
    def numMagicSquaresInside(self, grid: List[List[int]]) -> int:
        self.row = len(grid)
        self.col = len(grid[0])
        ans = 0 
        for i in range(self.row):
            for j in range(self.col):
                if self.isValid(i,j):
                    if self.checkMatrix(grid,i,j): ans+=1
        return ans
    
    def checkMatrix(self,grid,r,c):
        l = [0,0,0,0,0,0,0,0] #r1, r2, r3, c1, c2, c3, d1,d2\
        s = set()
        row = 0
        for i in range(r,r+3):
            col = 3
            for j in range(c,c+3):
                if grid[i][j] in s or grid[i][j]>9 or grid[i][j]<1: return False
                l[row]+=grid[i][j]
                l[col]+=grid[i][j]
                s.add(grid[i][j])
                col+=1
            row+=1
        l[6] = grid[r][c]+grid[r+1][c+1]+grid[r+2][c+2]
        l[7] = grid[r][c+2]+grid[r+1][c+1]+grid[r+2][c]
        temp = l[0]
        for i in l:
            if i!= temp:return False
        return True
            
    def isValid(self,r,c):
        if r+2<self.row and c+2<self.col: return True
        return False
        