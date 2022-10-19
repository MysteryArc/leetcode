#
# @lc app=leetcode.cn id=3 lang=python3
#
# [3] 无重复字符的最长子串
#

# @lc code=start
from typing import List


class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        li = list()
        length = len(s)
        if s.isspace() or length == 1:
            return 1
        maxlen = 0
        for i in range(length):
            while(s[i] in li):
                li.pop(0)
            li.append(s[i])
            maxlen = max(len(li), maxlen)
        return maxlen


# @lc code=end

