#User function Template for python3
class Solution:
	def bracketNumbers(self, str):
		count = 0
		pre_open = 0
		l = []
		temp = []
		for i in str:
		    if i == '(':
		        count += 1
		        temp.append(count)
		        l.append(count)
		    elif i == ')':
		        l.append(temp.pop())
		return l

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        S = input()
        ob = Solution()
        answer = ob.bracketNumbers(S)
        for value in answer:
            print(value, end=" ")
        print()

# } Driver Code Ends