# User function Template for python3

class Solution:
    #Function to find equilibrium point in the array.
    def findEquilibrium(self, arr):
        postfixSum = [0]*len(arr)
        for i in range(len(arr)-2, -1,-1):
            postfixSum[i] = postfixSum[i+1]+arr[i+1]
        if postfixSum[0] == 0 : return 0
        total = arr[0]
        for i in range(1, len(arr)-1):
            if postfixSum[i] == total : 
                return i
            total +=  arr[i]
        if total == 0 : return len(arr)-1
        
        return -1
            
        
        
            

