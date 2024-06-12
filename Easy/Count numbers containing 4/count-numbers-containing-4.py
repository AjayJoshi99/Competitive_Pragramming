
class Solution:
    def countNumberswith4(self, n : int) -> int:
        count = 0
        for x in range(1, n + 1) :
            if(self.has4(x) == True) :
                count += 1
        return count
    
    def has4(self,x : int) -> bool :
        while (x != 0) :
            if (x%10 == 4) :
                return True
            x = x //10
        return False
 

 






     

        



#{ 
 # Driver Code Starts
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        n = int(input())

        obj = Solution()
        res = obj.countNumberswith4(n)

        print(res)

# } Driver Code Ends