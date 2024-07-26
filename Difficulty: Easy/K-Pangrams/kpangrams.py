#User function Template for python3
class Solution:
    def kPangram(self,string, k):
        length = 0
        space = 0
        for i in string:
            if i != " ": length +=1
            else: space = 1
        if length < 26 or 26- len(set(string))+space > k: return False
        return True
        
#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())

    for tcs in range(T):
        string = input()
        K = int(input())
        ob = Solution()
        a = ob.kPangram(string, K)
        if a:
            print("true")
        else:
            print("false")

# } Driver Code Ends