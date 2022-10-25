/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */
#include<iostream>
#include<vector>

using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> temp;
        temp.push_back(1);
        result.push_back(temp);
        if(numRows == 1)
            return result;
        temp.push_back(1);
        result.push_back(temp);
        if(numRows == 2)
            return result;
        for (int i = 2; i < numRows; i++)
        {
            temp.resize(0);
            temp.resize(i + 1);
            temp[0] = 1;
            temp[i] = 1;
            for (int j = 1; j < temp.size() - 1; j++)
            {
                temp[j] = result[i - 1][j - 1] + result[i - 1][j];
            }
            result.push_back(temp);
        }
        return result;
    }
};
// @lc code=end

