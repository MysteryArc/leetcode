#
# @lc app=leetcode.cn id=2874 lang=python3
#
# [2874] 有序三元组中的最大值 II
#
import math
from typing import List
# @lc code=start
class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        n = len(nums)
        res = 0
        if n == 3:
            return max(0, (nums[0] - nums[1]) * nums[2])
        suffix = [0] * (n + 1)
        for i in range(n - 1, 0, -1):
            suffix[i] = max(suffix[i + 1], nums[i])
        premax = 0
        for i in range(n):
            res = max(res, (premax - nums[i]) * suffix[i + 1])
            premax = max(premax, nums[i])
        if res < 0:
            return 0
        return res
# @lc code=end

