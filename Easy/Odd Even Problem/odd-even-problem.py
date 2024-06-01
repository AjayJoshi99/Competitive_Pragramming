
class Solution:
    def oddEven(self, s : str) -> str:
        ans = 0
        l = set()
        for i in s:
            if i not in l:
                temp = s.count(i)
                if temp%2==1 and (ord(i) - ord('a')+1)%2==1:
                    ans+=1
                elif temp%2==0 and (ord(i) - ord('a')+1)%2==0:
                    ans+=1
                l.add(i)
        return 'EVEN' if ans%2==0 else 'ODD'
                

       

#{ 
 # Driver Code Starts
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        s = (input())

        obj = Solution()
        res = obj.oddEven(s)

        print(res)

# } Driver Code Ends