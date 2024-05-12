#User function Template for python3

class Solution:
    def minSteps(self, D):
        steps, curr = 0, 0
        while curr<D:
            steps+=1
            curr+=steps
        while curr-D&1:
            steps+=1
            curr+=steps
        return steps        
            

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        d = int(input())

        ob = Solution()
        print(ob.minSteps(d))

# } Driver Code Ends