#User function Template for python3

class Solution:
    
    #Function to return max value that can be put in knapsack of capacity W.
    def knapSack(self,W, wt, val):
        N = len(wt) 
        DP = [[0 for i in range(W+1)] for j in range(N+1)]
        for i in range(1, N+1):
            for w in range(1, W+1):
                
                j = w-wt[i-1]
                
                if j >= 0 :
                    DP[i][w] = max(DP[i-1][w], (DP[i-1][j]+val[i-1]))
                else:
                    DP[i][w] = DP[i-1][w]  
        return DP[N][W] 


#{ 
 # Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases):
        # n = int(input())
        W = int(input())
        val = list(map(int, input().strip().split()))
        wt = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.knapSack(W, wt, val))

# } Driver Code Ends