#User function Template for python3
class Solution:
    
    def __init__(self):
        self.keypad = {
            1:[1,2,4],
            2:[2,1,3,5],
            3:[3,2,6],
            4:[4,1,7,5],
            5:[5,2,4,6,8],
            6:[6,3,5,9],
            7:[7,4,8],
            8:[8,5,7,9,0],
            9:[9,6,8],
            0:[0,8]
            
        }
        self.dp = None
    
    def solve(self,lst,n):
        if n <= 0:
            return 1
        x = 0
        for each in lst:
            if self.dp[n][each]:
                temp = self.dp[n][each]
            else:
                temp = self.solve(self.keypad[each],n-1)
            x += temp
            self.dp[n][each] = temp
        return x
        
    def getCount(self, n):
        self.dp = [[None for j in range(10)] for _ in range(n+1)]
        x = 0
        for i in range(10):
            x+= self.solve(self.keypad[i],n-1)
        return x
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        n = int(input())
        ob = Solution()
        ans = ob.getCount(n)
        print(ans)

# } Driver Code Ends