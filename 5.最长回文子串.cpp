/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */
#include<iostream>
using namespace std;
#include<cstring>
// @lc code=start
class Solution
{
public:
    string longestPalindrome(string s)
    {
        int len = s.length();
        string s1 = s;
        int dp[1005][1005] = {0};
        for (int i = 0; i < len; i++)
        {
            s1[i] = s[len - 1 - i];
        }
        if (len == 1 || s1 == s)
            return s;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (s[j] == s1[i])
                    dp[i][j] = 1;
                else
                    dp[i][j] = -1;
            }
        }
        int max = 0;
        int head = -1, end = -1;
        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                int i0 = i, j0 = j;
                int max0 = 0;
                while (dp[i0][j0] == 1 && i0 < len && j0 < len)
                {
                    max0++;
                    i0++;
                    j0++;
                }
                if (max0 > max && j0 - 1 == len - i0 + max0 - 1)
                {
                    max = max0;
                    head = j;
                    end = j0;
                }
            }
        }
        string ans = "";
        for (int i = head; i < end; i++)
        {
            ans = ans + s[i];
        }
        return ans;
    }
};
// @lc code=end

