#User function Template for python3

class Solution:
    
    def CombinationSum2(self, arr, n, k):
        def backtrack(start, combination, target):
            if target == 0:
                combinations.append(combination[:])
                return
    
            for i in range(start, n):
                if arr[i] > target:
                    break
    
                if i > start and arr[i] == arr[i - 1]:
                    continue
    
                combination.append(arr[i])
                backtrack(i + 1, combination, target - arr[i])
                combination.pop()
    
        combinations = []
        arr.sort()
        backtrack(0, [], k)
        return combinations


#{ 
 # Driver Code Starts
#Initial Template for Python 3

for _ in range(int(input())):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))

    ob = Solution()
    result = ob.CombinationSum2(arr, n, k)
    for row in result:
        print(*row)
    if not result:
        print()

# } Driver Code Ends