#User function Template for python3
class Solution:
    def gcd(self, a, b):
        while b != 0:
            temp = b
            b = a % b
            a = temp
        return a

    def triangle_area(self, p, q, r):
        return abs(p[0] * (q[1] - r[1]) + q[0] * (r[1] - p[1]) + r[0] * (p[1] - q[1]))

    def boundary_points(self, p, q, r):
        return (self.gcd(abs(p[0] - q[0]), abs(p[1] - q[1])) + 
                self.gcd(abs(q[0] - r[0]), abs(q[1] - r[1])) + 
                self.gcd(abs(r[0] - p[0]), abs(r[1] - p[1])))

    def InternalCount(self, p, q, r):
        return (self.triangle_area(p, q, r) - self.boundary_points(p, q, r) + 2) // 2


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math
        
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        p=[0]*2
        q=[0]*2
        r=[0]*2
        p[0],p[1],q[0],q[1],r[0],r[1]=map(int,input().strip().split(" "))
        ob=Solution()
        ans=ob.InternalCount(p,q,r);
        print(ans)
# } Driver Code Ends