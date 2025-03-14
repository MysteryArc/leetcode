/*
 * @lc app=leetcode.cn id=3110 lang=cpp
 *
 * [3110] 字符串的分数
 */
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
// @lc code=start
class Solution {
public:
    int scoreOfString(string s) {
        int res = 0;
        for(int i = 0; i < s.size() - 1; i++)
        {
            int diff = abs(s[i] - s[i + 1]);
            res += diff;
        }
        return res;
    }
};
// @lc code=end

