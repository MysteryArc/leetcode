#
# @lc app=leetcode.cn id=2610 lang=python3
#
# [2610] 转换二维数组
#
import collections
from typing import List
# @lc code=start
class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        res = []
        count = [0] * 201
        for i in nums:
            count[i] += 1
            if count[i] > len(res):
                res.append([i])
            else:
                res[count[i] - 1].append(i)
        return res
# @lc code=end

