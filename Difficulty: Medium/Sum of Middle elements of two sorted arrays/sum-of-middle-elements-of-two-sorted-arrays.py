#User function Template for python3

class Solution:
    def sum_of_middle_elements(self, arr1, arr2):
        l = len(arr1)
        mid = (l+l)//2-1
        i = 0
        j = 0
        ans = 0
        count = 2
        while i<l and j<l:
            if mid == 0 and count:
                if arr1[i]<arr2[j]:
                    ans+=arr1[i]
                    i+=1
                else:
                    ans+=arr2[j]
                    j+=1
                count-=1
            elif count:
                if arr1[i]<arr2[j]:i+=1
                else:j+=1
                mid-=1
            else: return ans

            
#{ 
 # Driver Code Starts
#Initial Template for Python 3

import sys

input = sys.stdin.read


def main():
    input_lines = input().strip().split("\n")
    t = int(input_lines[0])

    index = 1
    results = []
    while t > 0:
        arr = list(map(int, input_lines[index].strip().split()))
        brr = list(map(int, input_lines[index + 1].strip().split()))
        index += 2

        solution = Solution()
        res = solution.sum_of_middle_elements(arr, brr)
        results.append(res)

        t -= 1

    for result in results:
        print(result)


if __name__ == "__main__":
    main()

# } Driver Code Ends