#
# @lc app=leetcode.cn id=2140 lang=python3
#
# [2140] 解决智力问题
#
import math
from typing import List
# @lc code=start
class Solution:
    def mostPoints(self, questions: List[List[int]]) -> int:
        n = len(questions)
        res = 0
        dp = [0] * n
        for i in range(n):
            dp[i] = max(dp[i], dp[i - 1])
            if i + questions[i][1] + 1 < n:
                dp[i + questions[i][1] + 1] = max(dp[i + questions[i][1] + 1], dp[i] + questions[i][0])
            else:
                res = max(res, dp[i] + questions[i][0])
        return res
# @lc code=end

