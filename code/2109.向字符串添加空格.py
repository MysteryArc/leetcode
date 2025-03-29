#
# @lc app=leetcode.cn id=2109 lang=python3
#
# [2109] 向字符串添加空格
#
import bisect
from typing import List
# @lc code=start
class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        res = ""
        flag = 0
        for i, c in enumerate(s):
            if flag < len(spaces) and i == spaces[flag]:
                res += " "
                flag += 1
            res += c
        return res
# @lc code=end

