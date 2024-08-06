from  collections import Counter
class Solution:
    def minimumPushes(self, word: str) -> int:
        d = list(Counter(word).values())
        d.sort(reverse=True)
        single = 8
        double = 8
        triple = 8
        four = 2
        ans = 0
        for val in d:
            if single:
                single-=1
                ans += val
            elif double:
                double-=1
                ans += 2*val
            elif triple:
                triple-=1
                ans += 3 *val
            else:
                ans += 4*val
        return ans
                
                
        