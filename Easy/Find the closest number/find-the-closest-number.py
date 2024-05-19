
from typing import List

class Solution:
    def findClosest(self, n : int, k : int, arr : List[int]) -> int:
        ans = -1
        adiff = 10**9 + 7
        start = 0
        end = n - 1
        
        while start <= end:
            mid = (start + end) // 2
            if (arr[mid] == k):
                return arr[mid]
            tempdiff = abs(arr[mid] - k)
            
            if tempdiff < adiff or (tempdiff == adiff and ans < arr[mid]):
                adiff = tempdiff
                ans = arr[mid]
            
            if arr[mid] > k:
                end = mid - 1
            else:
                start = mid + 1
            
        return ans

#{ 
 # Driver Code Starts

class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=[int(i) for i in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        
        k = int(input())
        
        
        arr=IntArray().Input(n)
        
        obj = Solution()
        res = obj.findClosest(n, k, arr)
        
        print(res)
        

# } Driver Code Ends