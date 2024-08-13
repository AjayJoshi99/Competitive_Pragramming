class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        res = []
        
        def backtrack(start, curr_sum, path):
            if curr_sum == target:
                res.append(path)
                return
            if curr_sum > target:
                return

            for i in range(start, len(candidates)):
                if i > start and candidates[i] == candidates[i-1]:
                    continue
                backtrack(i+1, curr_sum+candidates[i], path+[candidates[i]])
        
        backtrack(0, 0, [])
        return res
    
            
            