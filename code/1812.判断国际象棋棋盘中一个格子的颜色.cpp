/*
 * @lc app=leetcode.cn id=1812 lang=cpp
 *
 * [1812] 判断国际象棋棋盘中一个格子的颜色
 */
#include<iostream>
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int first = coordinates[0] - 'a' + 1;
        int second = coordinates[1] - 0;
        if((first + second) % 2 == 0)
            return false;
        else
            return true;
    }
};
// @lc code=end

