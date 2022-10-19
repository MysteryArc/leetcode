#
# @lc app=leetcode.cn id=442 lang=python3
#
# [442] 数组中重复的数据
#

# @lc code=start
class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        ans = []
        for e in nums:
            if(nums[abs(e) - 1] > 0):
                nums[abs(e) - 1] *= -1
            else:
                ans.append(abs(e))
        return ans

# @lc code=end

