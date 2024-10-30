from typing import List

class Solution:
    def maxTotalReward(self, rewardValues: List[int]) -> int:
        rewardValues.sort()
        n = len(rewardValues)
        c = rewardValues[-1]
        dp = [[0] * (c + 1) for _ in range(rewardValues[-1] + 1)]
        for i in range(1, c + 1):
            if rewardValues[0] < i:
                dp[rewardValues[0]][i] = rewardValues[0]
        for i in range(1, n - 1):
            for j in range(1, c + 1):
                if j > rewardValues[i] and rewardValues[i] > rewardValues[i - 1]:
                    dp[rewardValues[i]][j] = max(dp[rewardValues[i - 1]][j], dp[rewardValues[i - 1]][j - rewardValues[i]] + rewardValues[i])
                    if rewardValues[i] <= dp[rewardValues[i - 1]][j - rewardValues[i]]:
                        dp[rewardValues[i]][j] = dp[rewardValues[i]][j - 1]
                else:
                    dp[rewardValues[i]][j] = dp[rewardValues[i - 1]][j]
        return dp[rewardValues[n - 2]][c] + rewardValues[-1]