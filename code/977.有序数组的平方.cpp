/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n - 1;
        vector<int> res;
        while(i != j)
        {
            if(abs(nums[i]) > abs(nums[j]))
            {
                res.push_back(pow(nums[i], 2));
                i++;
            }
            else
            {
                res.push_back(pow(nums[j], 2));
                j--;
            }
        }
        res.push_back(pow(nums[i], 2));
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

