#User function Template for python3

class Solution:
    def sumMatrix(self, n, q):
        if n>q:
            return q-1
        if n*2<q or n==q:
            return 0
        else:
            return n-(q-n-1)
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n, q = map(int, input().split())

        ob = Solution()
        print(ob.sumMatrix(n, q))

# } Driver Code Ends