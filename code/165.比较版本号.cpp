/*
 * @lc app=leetcode.cn id=165 lang=cpp
 *
 * [165] 比较版本号
 */
#include <string>
#include <vector>
using namespace std;
// @lc code=start
class Solution
{
public:
    int compareVersion(string version1, string version2)
    {
        vector<string> v1, v2;
        string temp;
        for (auto c : version1)
        {
            if (c == '.')
            {
                v1.push_back(temp);
                temp = "";
            }
            else
            {
                temp += c;
            }
        }
        v1.push_back(temp);
        temp = "";
        for (auto c : version2)
        {
            if (c == '.')
            {
                v2.push_back(temp);
                temp = "";
            }
            else
            {
                temp += c;
            }
        }
        v2.push_back(temp);
        while (v1.size() < v2.size())
            v1.push_back("0");
        while (v2.size() < v1.size())
            v2.push_back("0");
        for (int i = 0; i < v1.size(); i++)
        {
            long long n1 = stoll(v1[i]);
            long long n2 = stoll(v2[i]);
            if (n1 > n2)
                return 1;
            else if (n1 < n2)
                return -1;
        }
        return 0;
    }
};
// @lc code=end
