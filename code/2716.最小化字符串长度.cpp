/*
 * @lc app=leetcode.cn id=2716 lang=cpp
 *
 * [2716] 最小化字符串长度
 */
#include<iostream>
#include<string>
#include<unordered_set>
#include<algorithm>
using namespace std;
// @lc code=start
class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> uniqueChars;
        for (char c : s) {
            uniqueChars.insert(c);
        }
        return uniqueChars.size();
    }
};
// @lc code=end

