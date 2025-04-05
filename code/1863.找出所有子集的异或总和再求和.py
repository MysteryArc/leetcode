#
# @lc app=leetcode.cn id=1863 lang=python3
#
# [1863] 找出所有子集的异或总和再求和
#
import collections
from typing import List
# @lc code=start
class Solution:
    def subsetXORSum(self, nums: List[int]) -> int:
        res, n = 0, len(nums)
        for i in range(2 ** n):
            xor = 0
            for j in range(n):
                if (i >> j) & 1:
                    xor ^= nums[j]
            res += xor
        return res
# @lc code=end

