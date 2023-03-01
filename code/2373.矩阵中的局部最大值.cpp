/*
 * @lc app=leetcode.cn id=2373 lang=cpp
 *
 * [2373] 矩阵中的局部最大值
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// @lc code=start
class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>> &grid)
    {
        vector<vector<int>> res;
        for (int i = 1; i < grid.size() - 1; i++)
        {
            vector<int> s;
            for (int j = 1; j < grid.size() - 1; j++)
            {
                s.push_back(max({grid[i - 1][j - 1], grid[i - 1][j], grid[i - 1][j + 1], grid[i][j - 1], grid[i][j], grid[i][j + 1], grid[i + 1][j - 1], grid[i + 1][j], grid[i + 1][j + 1]}));
            }
            res.push_back(s);
        }
        return res;
    }
};
// @lc code=end
