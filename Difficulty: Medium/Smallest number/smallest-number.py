#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3
class Solution:
    def smallestNumber(self, s, d):
        def sm(n):
            total = 0
            while n > 0:
                total += n % 10
                n = n // 10
            return total
        if s > 9 * d:
            return -1
        i = 10**(d-1)
        e = (10**d)-1
        while i<=e:
            if len(str(i))>d:
                return -1
            ans = sm(i)
            if ans ==s:
                return i
            i+=1
        
        


#{ 
 # Driver Code Starts.
# Position this line where user code will be pasted.

import sys
import math
input = sys.stdin.read
data = input().split()

t = int(data[0])
index = 1

for _ in range(t):
    s = int(data[index])
    d = int(data[index + 1])
    index += 2
    ob = Solution()
    print(ob.smallestNumber(s, d))

# } Driver Code Ends