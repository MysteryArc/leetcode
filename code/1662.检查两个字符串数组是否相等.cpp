/*
 * @lc app=leetcode.cn id=1662 lang=cpp
 *
 * [1662] 检查两个字符串数组是否相等
 */
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 0ms 12.1mB
// @lc code=start
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1 = "", str2 = "";
        int i = 0;
        while(i < word1.size() || i < word2.size())
        {
            if(i < word1.size())
                str1 = str1 + word1[i];
            if(i < word2.size())
                str2 = str2 + word2[i];
            if(str1[i] != str2[i])
                return false;
            i++;
        }
        if(str1 == str2)
            return true;
        else
            return false;
    }
};
// @lc code=end
// 拼接法 8ms 12.2mB
// class Solution
// {
// public:
//     bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
//     {
//         string str1 = "", str2 = "";
//         for (int i = 0; i < word1.size(); i++)
//         {
//             str1 = str1 + word1[i];
//         }
//         for (int i = 0; i < word2.size(); i++)
//         {
//             str2 = str2 + word2[i];
//         }
//         if (str1 == str2)
//             return true;
//         else
//             return false;
//     }
// };
