/*
 * @lc app=leetcode.cn id=3340 lang=cpp
 *
 * [3340] 检查平衡字符串
 */
#include <iostream>
#include <string>
using namespace std;
// @lc code=start
class Solution
{
public:
    bool isBalanced(string num)
    {
        char zero = '0';
        int single_n = 0, double_n = 0;
        for (int i = 0; i < num.size(); i++)
        {
            if (i % 2 == 0)
                double_n += num[i] - zero;
            else
                single_n += num[i] - zero;
        }
        return single_n == double_n;
    }
};
// @lc code=end
