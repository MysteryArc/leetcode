/*
 * @lc app=leetcode.cn id=1963 lang=cpp
 *
 * [1963] 使字符串平衡的最小交换次数
 */
#include<iostream>
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    int minSwaps(string s) {
        int c = 0, res = 0;
        for(auto ch : s)
        {
            if(ch == '[')
                c++;
            else if(c > 0)
                c--;
            else
            {
                c++;
                res++;
            }
        }
        return res;
    }
};
// @lc code=end

