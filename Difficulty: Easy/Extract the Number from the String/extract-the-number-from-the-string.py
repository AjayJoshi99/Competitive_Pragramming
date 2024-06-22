class Solution:
    def ExtractNumber(self,sentence):
        arr = list(map(str,sentence.split(" ")))
        ans = -1
        for word in arr:
            cur = 0
            if not any(char == '9' for char in word):
                try:
                    cur = int(word)
                except:
                    continue
                ans = max(ans, cur)
        return ans

#{ 
 # Driver Code Starts
t = int(input())
for _ in range(t):
    S = input()
    ob = Solution()
    ans = ob.ExtractNumber(S)
    print(ans)

# } Driver Code Ends