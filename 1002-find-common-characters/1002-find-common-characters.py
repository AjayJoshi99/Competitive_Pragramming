class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        d = {}
        for i in words[0]:
            d.update({i:words[0].count(i)})
        for i in d:
            for j in range(1,len(words)):
                d[i] = min(d[i], words[j].count(i))
        l = list()
        for i in d:
            if d[i]:
                while d[i]:
                    l.append(i)
                    d[i]-=1
        return l
       