#
# @lc app=leetcode.cn id=2255 lang=python3
#
# [2255] 统计是给定字符串前缀的字符串数目
#
import collections
from typing import List
# @lc code=start
class Solution:
    def countPrefixes(self, words: List[str], s: str) -> int:
        count = 0
        for str in words:
            if s.startswith(str):
                count += 1
        return count
# @lc code=end

