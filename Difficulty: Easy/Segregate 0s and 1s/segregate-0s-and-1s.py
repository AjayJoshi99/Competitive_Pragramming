#User function Template for python3

class Solution:
    def segregate0and1(self, arr):
        i = 0
        j = len(arr)-1
        while i<j:
            if arr[i] == 1 and arr[j] == 0:
                arr[i],arr[j] = arr[j],arr[i]
                i+=1
                j-=1
            elif arr[i] == 1 and arr[j]==1:
                j-=1
            elif arr[i]== 0 and arr[j] == 0:
                i+=1
            else:
                i+=1
                j-=1
        

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

        arr = list(map(int, input().strip().split()))

        obj = Solution()
        obj.segregate0and1(arr)

        print(*arr)

# } Driver Code Ends