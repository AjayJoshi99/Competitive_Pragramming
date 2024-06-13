#User function Template for python3

class Solution:
    def padovanSequence(self, n):
        if n in [0,1,2]: return 1
        a = 1
        b = 1
        c = 1
        d = 0
        mod = (10**9 )+ 7
        for i in range(n-2):
            d = (b + a)%mod
            a,b = b,c
            c  = d
        return d


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        ob = Solution()
        print(ob.padovanSequence(n))

# } Driver Code Ends