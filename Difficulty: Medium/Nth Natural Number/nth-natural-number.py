#User function Template for python3

class Solution:
    def findNth(self,N):
        res, P = 0, 1
        while N > 0:
            res += P * (N%9)
            N = N//9
            P *= 10
        return res

#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int(input())
for i in range(0, t):
    n = int(input())
    obj = Solution()
    s = obj.findNth(n)
    print(s)

# } Driver Code Ends