class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        l = len(nums)
        ans = []
        def rec(i, lst):
            if i==l:
                ans.append(lst)
                return
            #not pick
            rec(i+1,lst.copy())
            
            #pick
            lst.append(nums[i])
            rec(i+1,lst.copy())
            
        rec(0,[])
        return ans