class Solution:
    def tribonacci(self, n: int) -> int:
        a = 0
        b = 1
        c = 1
        if n == 0 : return 0
        else:
            for i in range(3,n+1):
                temp = a+b+c
                a = b
                b = c
                c = temp
        return c
                
                