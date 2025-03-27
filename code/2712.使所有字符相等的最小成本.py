#
# @lc app=leetcode.cn id=2712 lang=python3
#
# [2712] 使所有字符相等的最小成本
#

# @lc code=start
class Solution:
    def minimumCost(self, s: str) -> int:
        n = len(s)
        res = 0
        for i in range(n - 1):
            if s[i] != s[i + 1]:
                # 反转0->i或i+1->n-1
                res += min(i + 1, n - i - 1)
        return res
# @lc code=end

