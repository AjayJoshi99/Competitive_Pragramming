# your task is to complete this function
# function should return True/False or 1/0
# str1: pattern
# str2: text
class Solution:
   def wildCard(self, pattern, string):
        from functools import lru_cache
        n, m = len(pattern), len(string)
        
        @lru_cache(maxsize=None)
        def dfs(i=0, j=0):
            if i == n:
                return j == m
            elif j == m:
                return pattern[i] == "*" and dfs(i + 1, m)
            elif pattern[i] == "?" or pattern[i] == string[j]:
                return dfs(i + 1, j + 1)
            elif pattern[i] == "*":
                return dfs(i + 1, j) or dfs(i, j + 1)
            else:
                return False
        
        return int(dfs())


#{ 
 # Driver Code Starts
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        pattern = input().strip()
        string = input().strip()
        if Solution().wildCard(pattern, string):
            print(1)
        else:
            print(0)

# } Driver Code Ends