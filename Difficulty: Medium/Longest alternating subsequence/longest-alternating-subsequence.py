#User function Template for python3
class Solution:
    def alternatingMaxLength(self, arr):
        dec,inc =1,1
        for i in range(1, len(arr)):
            if arr[i] > arr[i - 1]:
                inc = dec + 1
            elif arr[i] < arr[i - 1]:
                dec = inc + 1
        return max(inc, dec)


#{ 
 # Driver Code Starts
if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().splitlines()

    tc = int(data[0])
    for i in range(1, tc + 1):
        s = data[i].strip().split()
        nums = list(map(int, s))
        obj = Solution()
        ans = obj.alternatingMaxLength(nums)
        print(ans)

# } Driver Code Ends