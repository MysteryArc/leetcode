/*
 * @lc app=leetcode.cn id=2207 lang=cpp
 *
 * [2207] 字符串中最多数目的子字符串
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    long long maximumSubsequenceCount(string text, string pattern)
    {
        int n = text.length();
        long long res = 0;
        int first = 0;
        int second = 0;
        if (pattern[0] == pattern[1])
        {
            for (int i = 0; i < n; i++)
                if (text[i] == pattern[0])
                    first++;
            for (int j = 1; j < first; j++)
                res += j;
            res += first;
            return res;
        }

        for (int i = 0; i < n; i++)
        {
            if (text[i] == pattern[0])
                first++;
            else if (text[i] == pattern[1])
            {
                second++;
                res += first;
            }
        }

        res += max(first, second);
        return res;
    }
};
// @lc code=end
