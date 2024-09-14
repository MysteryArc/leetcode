/*
 * @lc app=leetcode.cn id=2390 lang=cpp
 *
 * [2390] 从字符串中移除星号
 */
#include<iostream>
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        string res;
        for(int i = 0; i < n; i++)
            if(s[i] != '*')
                res.push_back(s[i]);
            else
                res.pop_back();
        return res;
    }
};
// @lc code=end

