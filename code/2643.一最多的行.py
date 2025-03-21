#
# @lc app=leetcode.cn id=2643 lang=python3
#
# [2643] 一最多的行
#
import collections
from typing import List
# @lc code=start
class Solution:
    def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:
        res = [0, 0]
        for i, row in enumerate(mat):
            inum = sum(row)
            if inum > res[1]:
                res = [i, inum]
        return res
# @lc code=end

