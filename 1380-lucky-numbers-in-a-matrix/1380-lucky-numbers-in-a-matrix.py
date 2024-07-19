class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        r = len(matrix)
        c = len(matrix[0])
        row = [0]*r
        col = [0]*c
        
        for i in range(r):
            temp = 10**6
            for j in range(c):
                temp = min(temp,matrix[i][j])
            row[i] = temp
            
        for i in range(c):
            temp = -1
            for j in range(r):
                temp = max(temp,matrix[j][i])
            col[i] = temp
            
        ans = []
        for i in range(r):
            for j in range(c):
                if row[i] == col[j] : ans.append(matrix[i][j])
        return ans