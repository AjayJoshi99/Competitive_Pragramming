#User function Template for python3
MOD=1000000007
dp=[0]*100001
dp[2]=1
dp[3]=3
for i in range(3,100001):
    dp[i]=(dp[i-1]+dp[i-2]+(pow(2,i-2,MOD)))%MOD
class Solution:
    def numberOfConsecutiveOnes(self,n):
        
        return dp[n]


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__':
    t = int(input())
    for _ in range(t):

        N = int(input())

        ob = Solution()
        print(ob.numberOfConsecutiveOnes(N))

# } Driver Code Ends