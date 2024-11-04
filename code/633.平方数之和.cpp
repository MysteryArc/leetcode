/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之和
 */
#include <iostream>
#include <cmath>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        int step = 1;
        for (int i = 0; i <= c / 2; step += 2)
        {
            if (sqrt(c - i) == int(sqrt(c - i)))
                return true;
            i += step;
        }
        return false;
    }
};
// @lc code=end

