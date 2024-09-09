class Solution:
    # Function to sort an array of 0s, 1s, and 2s
    def sort012(self, arr):
        n = len(arr)
        zero = 0
        one =0
        two =0
        for i in arr:
            if i == 0:
                zero+=1
            elif i == 1:
                one +=1
            else :
                two +=1
        for i in range(0,zero):
            arr[i] = 0
        for i in range(zero,zero+one):
            arr[i] = 1
        for i in range(zero+one,n):
            arr[i] = 2


#{ 
 # Driver Code Starts
def main():
    t = int(input().strip())  # Read the number of test cases
    ob = Solution()

    while t > 0:
        t -= 1
        arr = list(map(int,
                       input().strip().split())
                   )  # Read the array as space-separated integers
        ob.sort012(arr)  # Sort the array

        print(' '.join(map(str, arr)))  # Print the sorted array


if __name__ == "__main__":
    main()

# } Driver Code Ends