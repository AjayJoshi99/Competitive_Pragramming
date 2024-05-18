#User function Template for python3
from typing import List

class Solution:
	def findPeakElement(self, a):
	    l = len(a)
	    if len(a) == 1: return a[0]
        ans = 0
        if a[0]>a[l-1]:
            ans=a[0]
        else:
            ans=a[l-1]
        i = l//2
        while i>0 and i<l-1 :
            if a[i]>ans : ans = a[i]
            if a[i+1]>a[i] :i+=1
            elif a[i-1]>a[i] : i-=1
            else: break
        return ans
                


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        n = int(input())
        a = list(map(int, input().split()))
        ob = Solution()
        ans = ob.findPeakElement(a)
        print(ans)

# } Driver Code Ends