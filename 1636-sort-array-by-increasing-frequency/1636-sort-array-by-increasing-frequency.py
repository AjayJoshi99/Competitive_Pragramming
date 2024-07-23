class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        freq=[0]*201
        for x in nums:
            freq[x+100]-=1 
        return sorted(nums, key=lambda x:(freq[x+100], x), reverse=True)
        