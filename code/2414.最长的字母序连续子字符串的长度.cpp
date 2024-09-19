/*
 * @lc app=leetcode.cn id=2414 lang=cpp
 *
 * [2414] 最长的字母序连续子字符串的长度
 */
#include<iostream>
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n = s.length();
        int res = 1;
        for(int i = 0; i < n; i++)
        {
            int len = 1;
            while (s[i + 1] == s[i] + 1)
            {
                len++;
                res = max(len, res);
                i++;
            }
        }
        return res;
    }
};
// @lc code=end

