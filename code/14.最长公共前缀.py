#
# @lc app=leetcode.cn id=14 lang=python3
#
# [14] 最长公共前缀
#

# @lc code=start
from asyncio.windows_events import NULL

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        str1 = strs[0]
        ans = ""
        for i in range(1, len(strs)):
            str2 = strs[i]
            length = min(len(str1), len(str2))
            for j in range(length):
                if(str1[j] == str2[j]):
                    ans = ans + str1[j]
                else:
                    break
            str1 = ans
            ans = ""
        return str1
# @lc code=end

