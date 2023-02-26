/*
 * @lc app=leetcode.cn id=1247 lang=cpp
 *
 * [1247] 交换字符使得字符串相同
 */
#include<iostream>
#include<cmath>
using namespace std;

// @lc code=start
class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int x = 0, y = 0; // t表示相同下标字符不同的个数，s表示结果
        for (int i = 0; i < s1.length(); i++)
        {
            if(s1[i] != s2[i])
            {
                if(s1[i] == 'x')
                    x++;
                else
                    y++;
            }
        }
        if ((x + y) % 2 == 1)
            return -1;
        else
        {
            if(x % 2 == 0)
                return (x / 2 + y / 2);
            else
                return (x + y + 2) / 2;
        }
    }
};
// @lc code=end

