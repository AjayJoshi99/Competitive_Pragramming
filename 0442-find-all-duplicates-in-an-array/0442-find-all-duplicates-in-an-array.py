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
            
        