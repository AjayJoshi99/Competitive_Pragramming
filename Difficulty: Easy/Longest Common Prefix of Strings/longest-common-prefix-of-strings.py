#User function Template for python3

class Solution:
    def longestCommonPrefix(self, arr):
        if len(arr)==1: return arr[0]
        sorted(arr,key=len)
        ans = ''
        for idx,val in enumerate(arr[0]):
            for j in arr:
                if j[idx] != val:
                    if ans == '':return -1
                    return ans
            ans+=val
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())

    for _ in range(t):
        arr = [x for x in input().strip().split(" ")]

        ob = Solution()
        print(ob.longestCommonPrefix(arr))

# } Driver Code Ends