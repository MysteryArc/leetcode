from typing import List

class Solution:
    def minOperations(self, nums: List[int]) -> int:
        flip = 0
        res = 0
        for num in nums:
            if res % 2 == 1:
                num = 1 - num
            if num == 0:
                res += 1
                flip += 1
        return res