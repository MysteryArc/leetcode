/*
 * @lc app=leetcode.cn id=2595 lang=cpp
 *
 * [2595] 奇偶位数
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> evenOddBit(int n) {
        int odd = 0, even = 0;
        int num = n;
        int flag = 0;
        while(num != 1)
        {
            if(num % 2 == 1)
            {
                if(flag == 0)
                    even++;
                else
                    odd++;
            }
            flag = 1 - flag;
            num /= 2;
        }
        if(flag == 0)
            even++;
        else
            odd++;
        return {even, odd};
    }
};
// @lc code=end

