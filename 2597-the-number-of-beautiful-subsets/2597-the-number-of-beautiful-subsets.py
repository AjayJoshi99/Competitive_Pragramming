class Solution:
    def beautifulSubsets(self, nums: List[int], k: int) -> int:
        result = 1
        freq = defaultdict(collections.Counter)
        for x in nums:
            freq[x % k][x] += 1
        for fr in freq.values():
            n = len(fr)
            s = sorted(fr.items())
            count = [0] * (n + 1)
            count[n] = 1
            for i in range(n - 1, -1, -1):
                skip = count[i + 1]
                take = 2 ** s[i][1] - 1
                if i + 1 < n and s[i + 1][0] - s[i][0] == k:
                    take *= count[i + 2]
                else:
                    take *= count[i + 1]
                count[i] = skip + take
            result *= count[0]
        return result - 1