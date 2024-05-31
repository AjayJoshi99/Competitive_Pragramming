class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        l = len(nums)
        nums.sort()
        ans = []
        if nums[0]!=nums[1]:
            ans.append(nums[0])
        if nums[-1]!= nums[-2]:
            ans.append(nums[-1])
        if len(ans)==2: return ans
        for i in range(1,l-1):
            if nums[i-1]!=nums[i] and nums[i+1]!=nums[i]:
                ans.append(nums[i])
        return ans