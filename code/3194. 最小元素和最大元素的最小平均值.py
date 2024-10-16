class Solution:
    def minimumAverage(self, nums: List[int]) -> float:
        nums.sort()
        n = len(nums)
        res = nums[0] + nums[n - 1] / 1
        for i in range(0, n // 2):
            res = min(res, (nums[i] + nums[n - i - 1]) / 2.0)
        return res