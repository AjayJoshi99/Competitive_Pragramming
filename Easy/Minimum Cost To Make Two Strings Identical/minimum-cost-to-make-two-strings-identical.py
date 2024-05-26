#User function Template for python3
class Solution:
	def findMinCost(self, x, y, costX, costY):
		dp = [[0]*(len(y)+1) for _ in range(len(x)+1)]
        for i in range(1, len(x)+1):
            dp[i][0] = i*costX
        for j in range(1, len(y)+1):
            dp[0][j] = j*costY
            
        for i in range(len(x)):
            for j in range(len(y)):
                if x[i] == y[j]:
                    dp[i+1][j+1] = dp[i][j]
                else:
                    dp[i+1][j+1] = min(dp[i+1][j] + costY, dp[i][j+1] + costX)
        return dp[-1][-1]
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        X, Y, costX, costY = input().split()
        costX = int(costX)
        costY = int(costY)
        ob = Solution()
        ans = ob.findMinCost(X, Y, costX, costY)
        print(ans)

# } Driver Code Ends