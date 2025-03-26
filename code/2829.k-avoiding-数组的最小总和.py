#
# @lc app=leetcode.cn id=2829 lang=python3
#
# [2829] k-avoiding 数组的最小总和
#

# @lc code=start
class Solution:
    def minimumSum(self, n: int, k: int) -> int:
        res = []
        for i in range(1, k // 2 + 1):
            res.append(i)
            if len(res) == n:
                return sum(res)
        num = k
        while len(res) < n:
            res.append(num)
            num += 1
        return sum(res)

# @lc code=end

