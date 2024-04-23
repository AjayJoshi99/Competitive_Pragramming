#User function Template for python3
class Solution:
    def firstElement (self, n):
        a = 1
        b = 1
        ans = 0
        if n <= 2:
            return a
        for i in range(3,n+1):
            ans = (a+b)%(10**9+7)
            a = b
            b = ans
        return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        
        ob = Solution()
        print(ob.firstElement(n))
# } Driver Code Ends