/*
 * @lc app=leetcode.cn id=942 lang=cpp
 *
 * [942] 增减字符串匹配
 */
#include<iostream>
using namespace std;
#include<vector>
#include<string>
// @lc code=start
class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int low = 0, high = s.size();
        for(char c : s)
        {
            if(c == 'I')
            {
                ans.push_back(low);
                low++;
            }
            else
            {
                ans.push_back(high);
                high--;
            }
        }
        ans.push_back(low);
        return ans;
    }
};
// @lc code=end

