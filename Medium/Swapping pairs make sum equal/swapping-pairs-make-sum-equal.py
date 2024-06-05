class Solution:
    def findSwapValues(self,a, n, b, m):
        sa = sum(a)
        sb = sum(b)
        a = set(a)
        b = set(b)
        if sa==sb: return 1
        new_sum = (sa+sb)/2
        if sa>sb:
            sa,sb=sb,sa
            temp1 = a
            temp2 = b
        else: 
            temp1 = b
            temp2 = a
            
        for i in temp1:
            if (sa+i-new_sum) in temp2: return 1
        
        return -1
             
        
        
        


#{ 
 # Driver Code Starts
if __name__ == '__main__': 
    
    
    t=int(input())
    for _ in range(0,t):
        l=list(map(int,input().split()))
        n=l[0]
        m=l[1]
        a = list(map(int,input().split()))
        b = list(map(int, input().split()))
        ob = Solution()
        print(ob.findSwapValues(a,n,b,m))
# } Driver Code Ends