#User function Template for python3

class Solution:
    def ways(self, n,m):
        count=1
        c=1
        k=n+m

        for i in range(k,k-m,-1):
            count*=i

        for j in range(1,m+1):
            c*=j

        return (count//c)%(10**9+7)

    

#{ 
 # Driver Code Starts
#Initial Template for Python 3

t=int(input())
for _ in range(0,t):
    x,y=list(map(int,input().split()))
    ob = Solution()
    print(ob.ways(x,y))
# } Driver Code Ends