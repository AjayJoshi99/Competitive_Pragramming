#User function Template for python3

class Solution:
    def nQueen(self, n):
        self.col = [True]*n
        self.fd  = [True]*2*n
        self.rd  = [True]*2*n
        self.res = []

        def solution(x, n, res1):
            if x==n:
                self.res.append(res1)
                return
            
            for i in range(n):
                if self.col[i] and self.fd[x+i] and self.rd[x-i+n-1]:
                    self.col[i] = self.fd[x+i] = self.rd[x-i+n-1] = False
                    solution(x+1, n, res1+[i+1])
                    self.col[i] = self.fd[x+i] = self.rd[x-i+n-1] = True

        solution(0, n, [])
        return self.res
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        
        ob = Solution()
        ans = ob.nQueen(n)
        if(len(ans) == 0):
            print("-1")
        else:
            for i in range(len(ans)):
                print("[",end="")
                for j in range(len(ans[i])):
                    print(ans[i][j],end = " ")
                print("]",end = " ")
            print()
                
# } Driver Code Ends