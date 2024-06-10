#User function Template for python3
class Solution: 

   def merge(self, arr, low, high, mid):
        i = low
        j = mid + 1
        temp = []
        while (i <= mid and j <= high):
            if arr[i] < arr[j]:
                temp.append(arr[i])
                i += 1
            else:
                temp.append(arr[j])
                j += 1
        temp += arr[i:mid + 1]
        temp += arr[j:high + 1]
        #Merging the two sorted subarrays
        arr[low:high + 1] = temp

    #Function to recursively sort the array using merge sort
    def mergesort(self, arr, low, high):
        if low == high:
            return
        mid = low + (high - low) // 2
        self.mergesort(arr, low, mid)
        self.mergesort(arr, mid + 1, high)
        self.merge(arr, low, high, mid)

    #Function to match pairs of nuts and bolts
    def matchPairs(self, n, nuts, bolts):
        #Sorting nuts and bolts arrays
        self.mergesort(nuts, 0, n - 1)
        self.mergesort(bolts, 0, n - 1)
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        nuts = list(map(str, input().strip().split()))
        bolts = list(map(str, input().strip().split()))
        ob = Solution()
        ob.matchPairs(n, nuts, bolts)
        for x in nuts:
            print(x, end=" ")
        print()
        for x in bolts:
            print(x, end=" ")
        print()
        tc -= 1

# } Driver Code Ends