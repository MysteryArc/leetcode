#
# @lc app=leetcode.cn id=9 lang=python3
#
# [9] 回文数
#

# @lc code=start
class Solution:
    def isPalindrome(self, x: int) -> bool:
        str1 = str(x)
        l = len(str1)
        for i in range(l//2):
            if(str1[i]!=str1[l-i-1]):
                return False
        return True
# @lc code=end