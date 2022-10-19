/*
 * @lc app=leetcode.cn id=896 lang=cpp
 *
 * [896] 单调数列
 */
#include <iostream>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        int flaga = 1, flagb = 1;
        if (nums.size() == 1)
            return true;
        for (int i = 0; i < nums.size()-1; i++)
        {
            if (nums[i] > nums[i + 1])
                flagb = 0;
            else if (nums[i] < nums[i + 1])
                flaga = 0;
        }
        if (flaga + flagb >= 1)
            return true;
        else
            return false;
    }
};
// @lc code=end
