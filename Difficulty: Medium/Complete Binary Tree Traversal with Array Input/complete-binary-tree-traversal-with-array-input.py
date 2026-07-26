class Solution:
    def levelSort(self, arr):
        level = 0
        element = 0
        answer = list()
        temp = list()
        
        for i in range(len(arr)):
            temp.append(arr[i])
            element += 1
            
            if 2**level == element or i == len(arr)-1:
                level += 1
                temp.sort()
                answer.append(temp)
                temp = list()
                element = 0
        
        return answer