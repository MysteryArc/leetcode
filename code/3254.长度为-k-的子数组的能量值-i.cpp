/*
 * @lc app=leetcode.cn id=3254 lang=cpp
 *
 * [3254] 长度为 K 的子数组的能量值 I
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> res;
        int n = nums.size();
        int i = 0, j = i + k - 1;
        while(j < n)
        {
            int flag = 1;
            for(int l = i; l < j; l++)
                if(nums[l] != nums[l + 1] - 1)
                    flag = 0;
            if(flag == 1)
                res.push_back(nums[j]);
            else
                res.push_back(-1);
            i++, j = i + k - 1;
        }
        return res;
    }
};
// @lc code=end

