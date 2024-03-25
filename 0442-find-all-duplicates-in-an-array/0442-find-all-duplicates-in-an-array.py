class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans =[]
        n=len(nums)
        for i in range(n):
            x = abs(nums[i])
            if nums[x-1]<0:
                ans.append(x)
            nums[x-1] *= -1
        return ans
    
'''
#atlernate solution 
#time comlexity : O(n*log n)
class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        nums.sort()
        ans = []
        temp = 1
        for i in range(1,len(nums)):
            if nums[i]==nums[i-1]:
                temp+=1
            else:
                if temp == 2: ans.append(nums[i-1])
                temp=1
        if temp ==2: ans.append(nums[-1])
        return ans
    '''
            
        