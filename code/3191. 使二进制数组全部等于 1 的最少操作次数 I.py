class Solution:
    def minOperations(self, nums: List[int]) -> int:
        res = 0
        for i in range(0, len(nums) - 2):
            if nums[i] == 0:
                nums[i] = 1 - nums[i]
                nums[i + 1] = 1- nums[i + 1]
                nums[i + 2] = 1 - nums[i + 2]
                res += 1
        for i in nums:
            if i == 0:
                return -1
        return res