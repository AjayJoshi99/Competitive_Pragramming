#User function Template for python3

class Solution:
    def reversedBits(self, x):
        b_n = bin(x)[2:]
        x = b_n[::-1] +''.join(['0' for i in range(32-len(b_n))]) 
        return int(x,2)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        X=int(input())
        
        ob = Solution()
        print(ob.reversedBits(X))
# } Driver Code Ends