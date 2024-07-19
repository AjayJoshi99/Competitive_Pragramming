#User function Template for python3
class Solution:

	def constructLowerArray(self,arr):
	    n = len(arr)
	    li = [0] * n 
        sorted_arr = []  
        for i in range(n - 1, -1, -1):
            val = arr[i]
            index = self.binarySearch(sorted_arr, val)
            li[i] = index
            sorted_arr.insert(index, val)
        return li

    def binarySearch(self, arr, target):
        low, high = 0, len(arr)
        while low < high:
            mid = (low + high) // 2
            if arr[mid] < target:
                low = mid + 1
            else:
                high = mid

        return low


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.constructLowerArray(arr)
        for x in ans:
            print(x, end=" ")
        print()
        tc -= 1

# } Driver Code Ends