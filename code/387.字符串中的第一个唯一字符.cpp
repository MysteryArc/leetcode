/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */
#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>

using namespace std;
// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;
        for(char c : s)
        {
            map[c]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if(map[s[i]] == 1)
                return i;
        }
        return -1;
    }
};

// @lc code=end

int main()
{
    Solution s;
    cout << s.firstUniqChar("aadb") << endl;
}
