#User function Template for python3

class Solution:
    def maxOccured(self,n, l, r, maxx):
        diff = [0] * (maxx + 2)
        for i in range(n):
            diff[l[i]] += 1
            diff[r[i] + 1] -= 1
            
        max_occur, result , curr = 0,0,0
        for i in range(maxx + 1):
            curr += diff[i]
            if curr > max_occur:
                max_occur = curr
                result = i

        return result
            
#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math

A = [0] * 1000000


def main():

    T = int(input())

    while (T > 0):

        global A
        A = [0] * 1000000

        n = int(input())

        l = [int(x) for x in input().strip().split()]
        r = [int(x) for x in input().strip().split()]

        maxx = max(r)
        ob = Solution()
        print(ob.maxOccured(n, l, r, maxx))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends