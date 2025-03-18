#
# @lc app=leetcode.cn id=2614 lang=python3
#
# [2614] 对角线上的质数
#

# @lc code=start
class Solution:
    @staticmethod
    def isPrime(n) -> int:
        if n < 2:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return 0
        return 1
    def diagonalPrime(self, nums: List[List[int]]) -> int:
        maxPrime = 0
        for i in range(len(nums)):
            maxPrime = max(maxPrime, self.isPrime(nums[i][i]) * nums[i][i], self.isPrime(nums[i][len(nums) - 1 - i]) * nums[i][len(nums) - 1 - i])
        return maxPrime
# @lc code=end

