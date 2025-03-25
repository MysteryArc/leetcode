/*
 * @lc app=leetcode.cn id=2680 lang=cpp
 *
 * [2680] 最大或值
 */
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
// @lc code=start
class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
        vector<long long> suf(nums.size() + 1, 0);
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            suf[i] = suf[i + 1] | nums[i];
        }

        long long res = 0;
        long long pre = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            res = max(res, pre | (1ll * nums[i] << k) | suf[i + 1]);
            pre |= nums[i];
        }
        return res;
    }
};
// @lc code=end

