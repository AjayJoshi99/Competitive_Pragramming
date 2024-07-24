class Solution:
    def sortJumbled(self, mapping: list[int], nums: list[int]) -> list[int]:
        def translate_integer(num: int) -> int:
            if num == 0:  
                return mapping[0]
            res: int = 0
            cur_mult: int = 1 
            while num > 0:
                digit = num % 10
                num //= 10
                res = mapping[digit] * cur_mult + res
                cur_mult *= 10

            return res

        number_mapping: dict[int, int] = {}
        for num in nums:
            number_mapping[num] = translate_integer(num)
        nums.sort(key=lambda val: number_mapping[val])

        return nums