#User function Template for python3
import math
class Solution:
    def jugglerSequence(self, n):
        if n == 1: return [1]
        ans = [n]
        for i in range(1,10**7+9):
            if ans[i-1] %2==0:
                ans.append(math.floor(math.sqrt(ans[i-1])))
            else:
                ans.append(math.floor(math.pow(math.sqrt(ans[i-1]),3)))
            if ans[i] == 1:
                break
        return ans
            
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())

        ob = Solution()
        arr = ob.jugglerSequence(n)
        for i in (arr):
            print(i, end=" ")
        print()

# } Driver Code Ends