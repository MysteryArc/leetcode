#
# @lc app=leetcode.cn id=3375 lang=python3
#
# [3375] 使数组的值全部为 K 的最少操作次数
#
import collections
from typing import List
# @lc code=start
class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        s = set()
        for num in nums:
            if num < k:
                return -1
            elif num == k:
                continue
            else:
                s.add(num)
        return len(s)

# @lc code=end

