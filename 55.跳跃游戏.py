#
# @lc app=leetcode.cn id=55 lang=python3
#
# [55] 跳跃游戏
#

# @lc code=start
from operator import truediv


class Solution:
    def canJump(self, nums: List[int]) -> bool:
        length = len(nums)
        if(length == 1):
            return True
        elif(nums[0] == 0):
            return False
        i = 1
        for x in range(length-2, -1, -1):
            if nums[x] < i:
                i += 1
            else:
                i = 1
        if(i > 1):
            return False
        else:
            return True

# @lc code=end
