#
# @lc app=leetcode.cn id=2711 lang=python3
#
# [2711] 对角线上不同值的数量差
#
import collections
from typing import List
# @lc code=start
class Solution:
    def differenceOfDistinctValues(self, grid: List[List[int]]) -> List[List[int]]:
        res = [[0] * len(grid[0]) for _ in range(len(grid))]
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                s1 = set()
                x, y = i + 1, j + 1
                while x < len(grid) and y < len(grid[0]):
                    s1.add(grid[x][y])
                    x += 1
                    y += 1

                s2 = set()
                x, y = i - 1, j - 1
                while x >= 0 and y >= 0:
                    s2.add(grid[x][y])
                    x -= 1
                    y -= 1
                res[i][j] = abs(len(s1) - len(s2))
        return res
# @lc code=end

