/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> result;
        vector<int> temp;
        int t = 0;
        for (int i = 0; i < mat.size(); i++)
        {
            for (int j = 0; j < mat[0].size(); j++)
            {
                temp.push_back(mat[i][j]);
                t++;
                if(t == c)
                {
                    result.push_back(temp);
                    temp.resize(0);
                    t = 0;
                }
            }
        }
        if(result.size() != r)
            return mat;
        return result;
    }
};
// @lc code=end

