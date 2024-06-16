
from typing import List

class Solution:
    def isPrime(self,n):
        if n <= 1:
            return False
        for i in range(2, int(n**0.5)+1):
            if n % i == 0:
                return False
        return True
        
    def getPrimes(self, n : int) -> List[int]:
        ans= [-1,-1]
        i = 1
        j = n-1
        while i<=j:
            if self.isPrime(i) and self.isPrime(j):
                ans[0] = i
                ans[1] = j
                break
            i+=1
            j-=1
        return ans
        
#{ 
 # Driver Code Starts
class IntArray:

    def __init__(self) -> None:
        pass

    def Input(self, n):
        arr = [int(i) for i in input().strip().split()]  #array input
        return arr

    def Print(self, arr):
        for i in arr:
            print(i, end=" ")
        print()


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        n = int(input())

        obj = Solution()
        res = obj.getPrimes(n)

        IntArray().Print(res)

# } Driver Code Ends