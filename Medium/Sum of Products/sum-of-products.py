#User function Template for python3

class Solution:
    def pairAndSum(self, n, arr):
        ans = 0
        for i in range(32):
            c = 0
            for j in arr:
                if (j>>i)&1:
                    c += 1
            if c > 1:
                ans += (2**i)*((c-1) * c)//2
        return ans   
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        Arr=list(map(int,input().strip().split(' ')))
        ob=Solution()
        print(ob.pairAndSum(N,Arr))
# } Driver Code Ends