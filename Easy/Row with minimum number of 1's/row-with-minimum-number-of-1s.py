#User function Template for python3

class Solution:
    def minRow(self,n,m,a):
        minInd = -1
        min = 10000000
        for k, i in enumerate(a):
            count = 0
            for j in i:
                if j ==1:
                    count+=1
            if count<min: 
                minInd=k+1
                min = count
        return minInd


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math
        
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N,M=map(int,input().strip().split(" "))
        A=[]
        for i in range(N):
            B=list(map(int,input().strip().split(" ")))
            A.append(B)
        ob=Solution()
        print(ob.minRow(N,M,A))
# } Driver Code Ends