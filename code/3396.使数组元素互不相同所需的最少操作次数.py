#
# @lc app=leetcode.cn id=3396 lang=python3
#
# [3396] 使数组元素互不相同所需的最少操作次数
#
import bisect
from typing import List
# @lc code=start
class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        n = len(nums)
        mark = [0] * (101)
        for i in range(n - 1, -1, -1):
            if mark[nums[i]] == 0:
                mark[nums[i]] = 1
            else:
                return i // 2 + 1
        return 0
# @lc code=end

