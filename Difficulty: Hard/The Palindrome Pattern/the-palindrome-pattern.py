#User function Template for python3

class Solution:
    def pattern (self, arr):
        R= -1
        C = -1
        r = len(arr)
        c = len(arr[0])
        for i in range(r):
            k = 0
            j = c-1
            flag = True
            while k<j:
                if arr[i][k]!= arr[i][j]:
                    flag = False
                    break
                k+=1
                j-=1
            if flag:
                R = i
                break
        for i in range(c):
            k = 0
            j = r-1
            flag = True
            while k<j:
                if arr[k][i] != arr[j][i]:
                    flag = False
                    break
                k+=1
                j-=1
            if flag :
                C = i
                break
        if R == -1 and C == -1 : return '-1'
        if R!= -1: return str(R) + ' R'
        return str(C) + ' C'



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    ob = Solution()
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        a = list()
        c = 0
        for i in range(0, n):
            X = list()
            for j in range(0, n):
                X.append(arr[c])
                c += 1
            a.append(X)
        ans = ob.pattern(a)
        print(ans)

# } Driver Code Ends