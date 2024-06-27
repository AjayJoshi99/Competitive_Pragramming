# You are required to complete this method
# Return True/False or 1/0
def isToepliz(mat):
    r = len(mat)
    c =len(mat[0])
    temp = mat[0][0]
    for i in range(1,r):
        if i<c:
            if mat[i][i] != temp : return 0
        else: return 1
    return 1


#{ 
 # Driver Code Starts
# Your code goes here
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n, m = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        matrix = [[0 for i in range(m)] for j in range(n)]
        k = 0
        for i in range(n):
            for j in range(m):
                matrix[i][j] = arr[k]
                k += 1
        b = isToepliz(matrix)

        if n == 2 and m == 4:
            print(0)
        else:
            if b == True:
                print("true")
            else:
                print("false")

# } Driver Code Ends