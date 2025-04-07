#
# @lc app=leetcode.cn id=416 lang=python3
#
# [416] 分割等和子集
#
import bisect
from typing import List
# @lc code=start
class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        if sum(nums) % 2 != 0:
            return False
        target = sum(nums) // 2
        n = len(nums)
        dp = [[0] * (target + 1) for _ in range(n + 1)]
        for i in range(n + 1):
            for c in range(target + 1):
                if nums[i] <= c:
                    dp[i][c] = max(dp[i - 1][c], dp[i - 1][c - nums[i]] + nums[i])
                else:
                    dp[i][c] = dp[i - 1][c]
                if dp[i][c] == target:
                    return True
        return False
# @lc code=end

