/*
 * @lc app=leetcode.cn id=1436 lang=cpp
 *
 * [1436] 旅行终点站
 */
#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

// @lc code=start
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        map<string, int> m;
        for(int i = 0; i < n; i++)
        {
            m.insert(pair<string, int>(paths[i][0], 1));
        }
        for(int i = 0; i < n; i++)
        {
            if(m.count(paths[i][1])==0)
                return paths[i][1];
        }
        return "";
    }
};
// @lc code=end

