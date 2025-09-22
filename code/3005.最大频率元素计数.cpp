/*
 * @lc app=leetcode.cn id=3005 lang=cpp
 *
 * [3005] 最大频率元素计数
 */
#include <vector>
#include <unordered_map>
using namespace std;
// @lc code=start
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> freq;
        int max = 0;
        vector<int> maxnum;
        for(int n: nums) {
            freq[n]++;
            if(freq[n] > max) {
                max = freq[n];
                maxnum.clear();
                maxnum.push_back(n);
            } else if(freq[n] == max) {
                maxnum.push_back(n);
            }
        }
        return maxnum.size() * max;
    }
};
// @lc code=end

