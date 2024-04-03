class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        boardDic = defaultdict(int)
        for i in range(len(board)):
            for j in range(len(board[0])):
                boardDic[board[i][j]] += 1

        wordDic = Counter(word)
        for c in wordDic:
            if c not in boardDic or boardDic[c] < wordDic[c]:
                return False

        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] == word[0]:
                    if self.dfs(i, j, 0, board, word):
                        return True
        return False

    def dfs(self, i, j, k, board, word):
        if i < 0 or j < 0 or i >= len(board) or j >= len(board[0]) or \
           k >= len(word) or word[k] != board[i][j]:
            return False
        
        #final condition 
        if k == len(word) - 1:
            return True

        directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]

        for x, y in directions:
            #here value of this cell will never accepted only for this phase
            #we are change value to -1 of our route
            tmp = board[i][j]
            board[i][j] = -1

            # If dfs returns True then return True so there will be no further dfs
            if self.dfs(i + x, j + y, k + 1, board, word): 
                return True
            #if word not matched remove changes
            board[i][j] = tmp
            