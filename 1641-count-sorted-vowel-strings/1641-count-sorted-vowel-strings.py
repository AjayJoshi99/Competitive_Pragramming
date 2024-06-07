class Solution:
    def countVowelStrings(self, n: int) -> int:
        vowels = ['a','e','i','o','u']
        
        def helper(curr_size,prev_ch):
            if curr_size == n: return 1
            count = 0
            for i in vowels:
                if i >= prev_ch:
                    count += helper(curr_size+1,i)
            return count
        
        return helper(0,'a')
    
    