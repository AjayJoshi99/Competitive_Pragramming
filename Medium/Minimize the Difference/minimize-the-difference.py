
from typing import List

class Solution:
    def minimizeDifference(self, n : int, k : int, arr : List[int]) -> int:
        if k==n-1:
            return 0
        rit_min=[0]*n
        rit_max=[0]*n
        left_min=[0]*n
        left_max=[0]*n
        left_min[0]=left_max[0]=arr[0]
        for i in range(1,n):
            left_min[i]=min(left_min[i-1],arr[i])
            left_max[i]=max(left_max[i-1],arr[i])
        rit_min[-1]=rit_max[-1]=arr[-1]
        for i in range(n-2,-1,-1):
            rit_min[i]=min(rit_min[i+1],arr[i])
            rit_max[i]=max(rit_max[i+1],arr[i])
        ans=rit_max[k]-rit_min[k]
        i=0
        for j in range(k+1,n):
            ans=min(ans,max(left_max[i],rit_max[j])-min(left_min[i],rit_min[j]))
            i+=1
        ans=min(ans,left_max[i]-left_min[i])    
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
        res = obj.minimizeDifference(n, k, arr)
        
        print(res)
        

# } Driver Code Ends