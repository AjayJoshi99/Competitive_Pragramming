#User function Template for python3
class Solution:
    def swapNibbles (self, n):
        n = str(bin(n))[2:]
        t = 8 - len(n)
        n = '0'*t + n
        return int(n[4:]+ n[:4],2)

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())

        ob = Solution()
        print(ob.swapNibbles(n))

# } Driver Code Ends