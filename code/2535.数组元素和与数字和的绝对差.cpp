/*
 * @lc app=leetcode.cn id=2535 lang=cpp
 *
 * [2535] 数组元素和与数字和的绝对差
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int res = 0;
        for(int num : nums){
            res += num;
            while(num >= 10)
            {
                res -= num % 10;
                num /= 10;
            }
            res -= num;
        }
        return res;
    }
};
// @lc code=end

