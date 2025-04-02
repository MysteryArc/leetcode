#
# @lc app=leetcode.cn id=2873 lang=python3
#
# [2873] 有序三元组中的最大值 I
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
        premax, premin = 0, math.inf
        for i in range(n):
            res = max(res, (premax - nums[i]) * suffix[i + 1])
            premax = max(premax, nums[i])
        if res < 0:
            return 0
        return res
# @lc code=end

'''
时间复杂度：O(n)
空间复杂度：O(n)
说明：
    1. 先计算后缀最大值数组suffix[i]，表示从i到n-1的最大值。
    2. 遍历nums数组，由于i、j存在先后顺序,所以只需要记录前缀最大值premax，同时利用当前数字和后缀数组计算当前的最大值res。
    3. 最终返回res的值，如果res小于0，则返回0。
'''