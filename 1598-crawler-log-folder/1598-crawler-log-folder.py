class Solution(object):
    def minOperations(self, logs):
        c = 0 
        for i in logs:
            if i =='../': 
                c = max(0,c-1)
            elif i == './': pass
            else: c+=1
        return c