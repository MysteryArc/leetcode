/*
 * @lc app=leetcode.cn id=2760 lang=cpp
 *
 * [2760] 最长奇偶子数组
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int l = 0, r = 0;
        while(l < nums.size() - 1)
        {
            if(nums[l] % 2 == 0 && nums[l + 1] % 2 == 1 && nums[l] <= threshold)
            {
                r = l + 1;
                while(r < nums.size())
                {
                    if(nums[r] % 2 != nums[r - 1] % 2 && nums[r] <= threshold)
                    {
                        r ++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            l ++;
        }
        return r - l;
    }
};
// @lc code=end

