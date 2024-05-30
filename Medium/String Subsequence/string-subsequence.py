
class Solution:
    def countWays(self, S1, S2):
        dp = []
        m = len(S1)
        n = len(S2)
        for i in range(m+1):
            a = [0]*(n+1)
            dp.append(a)
            dp[i][0] = 1
        for i in range(1,m+1):
            for j in range(1,n+1):
                if S1[i-1] == S2[j-1]:
                    dp[i][j] = dp[i-1][j]+dp[i-1][j-1]
                else:
                    dp[i][j] = dp[i-1][j]
                dp[i][j] = dp[i][j]%(10**9+7)
        return dp[m][n]

#{ 
 # Driver Code Starts
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        s1 = (input())

        s2 = (input())

        obj = Solution()
        res = obj.countWays(s1, s2)

        print(res)

# } Driver Code Ends