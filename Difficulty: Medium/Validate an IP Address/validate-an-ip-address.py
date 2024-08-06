#User function Template for python3
class Solution:
    def isValid(self, s):
        l = len(s)
        if l>15:return False
        temp = list(map(str,s.split('.')))
        if len(temp)!= 4: return False
        for i in temp:
            if not i or not(0<=int(i)<=255):return False
            if len(i)>1 and i[0]=='0':return False
            
        return True

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(0, t):
        s = input()
        ob = Solution()
        if (ob.isValid(s)):
            print("true")
        else:
            print("false")

# } Driver Code Ends