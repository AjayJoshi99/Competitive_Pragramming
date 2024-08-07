#User function Template for python3

class Solution:
    def kthElement(self, k, arr1, arr2):
        count = 0
        i = 0
        j = len(arr1)
        n = 0
        m = len(arr2)
        while i<j and n<m:
            count +=1
            if arr1[i]>arr2[n]:
                if count == k: return arr2[n]
                n+=1
            else:
                if count == k: return arr1[i]
                i+=1
        while i<j:
            count+=1
            if count==k:return arr1[i]
            i+=1
        while n<m:
            count+=1
            if count ==k:return arr2[n]
            n+=1
                

#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while (T > 0):

        k = int(input())
        a = [int(x) for x in input().strip().split()]
        b = [int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.kthElement(k, a, b))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends