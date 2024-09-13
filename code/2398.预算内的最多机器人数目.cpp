/*
 * @lc app=leetcode.cn id=2398 lang=cpp
 *
 * [2398] 预算内的最多机器人数目
 */
#include <iostream>
#include <vector>
#include <cmath>
#include <deque>
using namespace std;
// @lc code=start
class Solution
{
public:
    int maximumRobots(vector<int> &chargeTimes, vector<int> &runningCosts, long long budget)
    {
        int n = chargeTimes.size();
        long long costs = 0;
        int res = 0;
        int begin = 0;
        deque<int> dq;
        for (int i = 0; i < n; i++)
        {
            while (!dq.empty() && chargeTimes[dq.back()] < chargeTimes[i])
                dq.pop_back();
            dq.push_back(i);
            costs += runningCosts[i];
            long long sum = chargeTimes[dq.front()] + (i - begin + 1) * costs;
            if (sum > budget)
            {
                long long self = chargeTimes[i] + runningCosts[i];
                if (self > budget)
                {
                    begin = i + 1;
                    costs = 0;
                    dq.clear();
                }
                else
                    while (sum > budget && begin < i)
                    {
                        if (begin == dq.front())
                            dq.pop_front();
                        costs -= runningCosts[begin];
                        begin++;
                        sum = chargeTimes[dq.front()] + (i - begin + 1) * costs;
                    }
            }
            else
                res = max(i - begin + 1, res);
        }
        return res;
    }
};
// @lc code=end
