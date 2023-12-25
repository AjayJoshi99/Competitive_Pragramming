class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        d = {}
        st = []
        ans = []
        
        for x in nums2:
            while len(st) and st[-1] < x:
                d[st.pop()] = x
            st.append(x)

        for x in nums1:
            ans.append(d.get(x, -1))
            '''dictionary.get(keyname, value)
                value :  A value to return if the specified key does not exist.
                            Default value None'''
        return ans