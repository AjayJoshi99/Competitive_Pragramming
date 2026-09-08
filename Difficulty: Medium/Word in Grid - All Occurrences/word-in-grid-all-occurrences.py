class Solution:
    def searchWord(self, mat, word):
        ans = list()
        for i in range(len(mat)):
            for j in range(len(mat[0])):
                if self.helper(mat, word, i, j):
                    ans.append([i, j])
        return ans

    def helper(self, mat, word, x, y):
        if mat[x][y] != word[0]:
            return False

        directions = [(0, 1), (0, -1), (1, 0), (-1, 0), (1, 1), (1, -1), (-1, 1), (-1, -1)]

        for dx, dy in directions:
            k = 1
            curr_x, curr_y = x + dx, y + dy

            while k < len(word):
                if 0 <= curr_x < len(mat) and 0 <= curr_y < len(mat[0]) and mat[curr_x][curr_y] == word[k]:
                    curr_x += dx
                    curr_y += dy
                    k += 1
                else:
                    break

            if k == len(word):
                return True

        return False
