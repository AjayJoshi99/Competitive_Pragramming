class Solution:
    def averageWaitingTime(self, l: List[List[int]]) -> float:
        # sorted(l,key=lambda l:l[0])
        total = 0
        time = l[0][0]
        for i in l:
            if i[0]<=time:
                total += (time-i[0]+i[1])
                time += i[1]
            else:
                total += i[1]
                time += i[0]-time + i[1]            
        return total/len(l)
            