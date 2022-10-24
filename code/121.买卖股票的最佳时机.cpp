/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> dp(prices.size());
        int maxdp = 0;
        int minp = prices[0];
        dp[0] = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            minp = min(minp, prices[i]);
            dp[i] = max(dp[i - 1], prices[i] - minp);
            if(dp[i] > maxdp)
                maxdp = dp[i];
        }
        return maxdp;
    }
};
// @lc code=end

