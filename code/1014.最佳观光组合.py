#
# @lc app=leetcode.cn id=1014 lang=python3
#
# [1014] 最佳观光组合
#

# @lc code=start
class Solution:
    def maxScoreSightseeingPair(self, values: List[int]) -> int:
        n = len(values)
        max = values[0]
        res = 0
        for i in range(1, n):
            sum = max + values[i] - i
            if sum > res:
                res = sum
            if values[i] + i > max:
                max = values[i] + i
        return res
# @lc code=end

