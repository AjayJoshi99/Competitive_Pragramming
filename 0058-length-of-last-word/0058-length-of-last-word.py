class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        words = s.split()
        words = words[::-1]
        for i in words:
            if len(i): return len(i)
        return 0
        