#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3
class Solution:
    def findMaxProduct(self, arr):
        if len(arr) == 1: return arr[0]
        mod = 10**9 + 7
        neg_min = -10000
        neg = 1
        pos = 1
        neg_cnt = 0
        temp = False
        zero = 0
        for i in arr:
            if i < 0:
                neg_cnt += 1
                neg = neg*i
                neg_min = max(neg_min,i)
            elif i > 0 : 
                temp = True
                pos=pos*i
            else: zero = 1
        if temp :
            if neg > 0 : return (pos*neg)%mod
            return (pos*(neg//neg_min))%mod
        elif neg > 0 and neg_cnt != 0:
            return neg
        elif neg_cnt >1 :
            return (neg//neg_min)%mod
        return 0
    
    


#{ 
 # Driver Code Starts.
if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().split()

    index = 0
    t = int(data[index])
    index += 1
    results = []
    
    for _ in range(t):
        n = int(data[index])
        index += 1
        arr = list(map(int, data[index:index + n]))
        index += n
        solution = Solution()
        ans = solution.findMaxProduct(arr)
        results.append(ans)
    
    for result in results:
        print(result)
# } Driver Code Ends