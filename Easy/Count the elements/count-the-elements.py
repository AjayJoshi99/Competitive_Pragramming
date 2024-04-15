#User function Template for python3
import bisect
class Solution:
    def countElements(self, a, b, n, query, q):
        b.sort()
        ans = []
        for i in query:
            ans.append(bisect.bisect_right(b,a[i]))
        return ans
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int(input())
for _ in range(0, t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    q = int(input())
    query = []
    ob = Solution()
    for i in range(q):
        query.append(int(input()))
    ans = ob.countElements(a, b, n, query, q)
    for i in range(q):
        print(ans[i])

# } Driver Code Ends