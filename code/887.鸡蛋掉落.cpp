/*
 * @lc app=leetcode.cn id=887 lang=cpp
 *
 * [887] 鸡蛋掉落
 */
#include <unordered_map>
#include <iostream>
using namespace std;
// @lc code=start
class Solution
{
public:
    unordered_map<int, int> dict;
    int dp(int k, int n)
    {
        if (dict.find(n * 100 + k) == dict.end())
        {
            int res;
            if (k == 1 || n == 1 || n == 0)
                res = n;
            else
            {
                int i = 1, j = n;
                while (i + 1 < j)
                {
                    int x = (i + j) / 2;
                    int f1 = dp(k - 1, x - 1);
                    int f2 = dp(k, n - x);

                    if (f1 < f2)
                        i = x;
                    else if (f1 > f2)
                        j = x;
                    else
                        i = j = x;
                }
                res = min(max(dp(k - 1, i - 1), dp(k, n - i)),
                          max(dp(k - 1, j - 1), dp(k, n - j))) +
                      1;
            }
            dict[n * 100 + k] = res;
        }
        return dict[n * 100 + k];
    }

    int superEggDrop(int k, int n)
    {
        return dp(k, n);
    }
};
// @lc code=end
