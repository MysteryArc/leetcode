/*
 * @lc app=leetcode.cn id=1700 lang=cpp
 *
 * [1700] 无法吃午餐的学生数量
 */
#include<iostream>
#include<vector>

using namespace std;
// @lc code=start
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int s0 = 0, s1 = 0;
        for (int i = 0; i < students.size(); i++)
        {
            if (students[i] == 1)
                s1++;
            else
                s0++;
        }
        for (int i = 0; i < sandwiches.size(); i++)
        {
            if (sandwiches[i] == 0 && s0 > 0)
                s0--;
            else if (sandwiches[i] == 1 && s1 > 0)
                s1--;
            else
                break;
        }
        return s0 + s1;
    }
};
// @lc code=end

