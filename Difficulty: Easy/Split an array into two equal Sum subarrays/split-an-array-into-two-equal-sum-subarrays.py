class Solution:
    def canSplit(self, arr):
        i = 0
        j = len(arr)-1
        sum1 = 0
        sum2 = 0
        while i<=j:
            if sum2>sum1:
                sum1+=arr[i]
                i+=1
            elif sum2==sum1:
                if arr[i]>arr[j]:
                    sum2+=arr[j]
                    j-=1
                else:
                    sum1+=arr[i]
                    i+=1
            else:
                sum2+=arr[j]
                j-=1
        return sum1==sum2


#{ 
 # Driver Code Starts
if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().splitlines()

    t = int(data[0])
    index = 1
    for _ in range(t):
        arr = list(map(int, data[index].split()))
        index += 1

        obj = Solution()
        res = obj.canSplit(arr)
        if (res):
            print("true")
        else:
            print("false")

# } Driver Code Ends