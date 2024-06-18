#User function template for Python

class Solution:
    def rectanglesInCircle(self,r):
        count=0
        r = 2*r
        for i in range(1,r):
            for j in range(1,r):
                if(i**2<=r*r-j**2):
                    count+=1
        return count 

        

#{ 
 # Driver Code Starts
#Initial Template for Python

import math

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ans = ob.rectanglesInCircle(N)
        print(ans)

# } Driver Code Ends