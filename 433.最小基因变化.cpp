/*
 * @lc app=leetcode.cn id=433 lang=cpp
 *
 * [433] 最小基因变化
 */
#include<iostream>
using namespace std;
#include<vector>
#include<queue>
// @lc code=start
class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        if (start != end && bank.size() == 0)
        {
            return -1;
        }
        else
        {
            int max = -1;
            queue<int> q; // 存储与结果不同位置的下标
            for (int i = 0; i < 8; i++)
            {
                if (start.substr(i, 1) != end.substr(i, 1))
                    q.push(i);
            }
            int k = 0;
            int prev = 0;
            while (!q.empty())
            {
                int index = q.front();
                q.pop();
                string medium = start.substr(0, index) + end.substr(index, 1) + start.substr(index + 1, 9 - index);
                int i = 0;
                for (i = 0; i < bank.size(); i++)
                {
                    if (medium == bank[i])
                    {
                        k++;
                        prev = 0;
                        start = medium;
                        break;
                    }
                }
                if (i == bank.size())
                {
                    prev++;
                    if (prev > bank.size())
                        return -1;
                    q.push(index);
                    medium = start;
                }
            }
            return k;
        }
    }
};
// @lc code=end

