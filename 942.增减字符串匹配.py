#
# @lc app=leetcode.cn id=942 lang=python3
#
# [942] 增减字符串匹配
#

# @lc code=start
class Solution:
    def diStringMatch(self, s: str) -> List[int]:
        length = len(s)
        high = length
        low = 0
        ans = []
        for c in s:
            if(c == 'I'):
                ans.append(low)
                low += 1
            else:
                ans.append(high)
                high -= 1
        ans.append(low)
        return ans
# @lc code=end

