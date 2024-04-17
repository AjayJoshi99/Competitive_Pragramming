#User function Template for python3

from bisect import bisect_left, insort
class Solution:
    def countPairs(self,arr, n):

        new_arr = [i * j for i, j in enumerate(arr)]
        ans = 0
        lis = []
        for i in range(n - 1, -1, -1):
            if not lis:
                insort(lis, new_arr[i])
                continue
            ans += bisect_left(lis, new_arr[i])
            insort(lis, new_arr[i])
        return ans

#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        ob= Solution()
        print(ob.countPairs(a, n))

        T -= 1


if __name__ == "__main__":
    main()
    
# } Driver Code Ends