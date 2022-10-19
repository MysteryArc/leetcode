#
# @lc app=leetcode.cn id=13 lang=python3
#
# [13] 罗马数字转整数
#

# @lc code=start
class Solution:
    def romanToInt(self, s: str) -> int:
        sum = 0
        l = len(s)
        dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50,
                'C': 100, 'D': 500, 'M': 1000}
        i = 0
        while i != l:
            if i != l - 1:
                if dict.get(s[i]) < dict.get(s[i + 1]):
                    sum = sum + dict.get(s[i+1]) - dict.get(s[i])
                    i += 2
                else:
                    sum += dict.get(s[i])
                    i += 1
            else:
                sum += dict.get(s[i])
                i += 1
        return sum
            
# @lc code=end
