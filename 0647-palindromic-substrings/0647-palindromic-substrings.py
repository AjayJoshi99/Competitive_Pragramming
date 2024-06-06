class Solution:
    def countSubstrings(self, s: str) -> int:
        count=0
        for i in range(len(s)):
            for j in range(i,len(s)):
                if s[i:j+1]==s[i:j+1][::-1]:
                    count+=1
        return count
"""        l = len(s)
        dp = [[False for _ in range(l)] for _ in range(l)]
        count = 0
        for i in range(l):
            dp[i][i] = True
            count+=1
        
        for i in range(l):
            for j in range(i+1,l):
                if i!=j and s[i] == s[j] and dp[i+1][j-1]:
                    dp[i][j] = True
                    count+=1
        return count"""
            