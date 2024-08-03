class Solution:
    def celebrity(self, mat):
        n=len(mat)
        candidate=0
        Flag=False
        for i in range(len(mat)):
            if mat[i]==[0]*len(mat[0]):
                candidate=i
                Flag=True
        if Flag==False:
            return -1
            
        for j in range(n):
            if j!=candidate:
                if mat[j][candidate]==0:
                    return -1
        return candidate

#{ 
 # Driver Code Starts
# Main function to handle input and output
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        M = []
        for _ in range(n):
            M.append(list(map(int, input().split())))

        ob = Solution()
        print(ob.celebrity(M))

# } Driver Code Ends