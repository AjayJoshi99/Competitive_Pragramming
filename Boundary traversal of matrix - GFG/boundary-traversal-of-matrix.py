#User function Template for python3

class Solution:
    
    #Function to return list of integers that form the boundary 
    #traversal of the matrix in a clockwise manner.
    def BoundaryTraversal(self,matrix, n, m):
        lrow=0;rrow=n-1
        lcol=0;rcol=m-1
        dir=0
        l=[]
        if n==1:
            return matrix[0]
        if(m==1):
            return [matrix[i][0] for i in range(n)]
        while(dir<4):
            if(dir==0):
                #top row left to right 
                for i in range(rcol+1):
                    l.append(matrix[lrow][i])
                dir+=1
                lrow+=1
            elif(dir==1):
                #last column top to bottom
                for j in range(lrow,rrow+1):
                    l.append(matrix[j][rcol])
                dir+=1
                rcol-=1
            elif(dir==2):
                #last row right to left
                for j in range(rcol,lcol-1,-1):
                    l.append(matrix[rrow][j])
                dir+=1
                rrow-=1
                
            else:
                #first column bottom to top
                for j in range(rrow,lrow-1,-1):
                    l.append(matrix[j][lcol])
                dir+=1
                lcol+=1
                
        return l 


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n,m = map(int, input().strip().split())
        values = list(map(int, input().strip().split()))
        k = 0
        matrix =[]
        for i in range(n):
            row=[]
            for j in range(m):
                row.append(values[k])
                k+=1
            matrix.append(row)
        obj = Solution()
        ans = obj.BoundaryTraversal(matrix,n,m)
        for i in ans:
            print(i,end=" ")
        print()

# } Driver Code Ends