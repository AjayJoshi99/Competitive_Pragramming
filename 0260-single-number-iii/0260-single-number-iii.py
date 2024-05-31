class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        nums.sort()
        ans = list()
        if nums[0]!=nums[1]:
            ans.append(nums[0])
        if nums[-1]!= nums[-2]:
            ans.append(nums[-1])
        if len(ans)==2: return ans
        for i in range(1,len(nums)-1):
            if nums[i-1]<nums[i]<nums[i+1]:
                ans.append(nums[i])
        return ans