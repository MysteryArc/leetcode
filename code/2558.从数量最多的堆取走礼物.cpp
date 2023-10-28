/*
 * @lc app=leetcode.cn id=2558 lang=cpp
 *
 * [2558] 从数量最多的堆取走礼物
 */
#include<iostream>
#include<cmath>
using namespace std;
// @lc code=start
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int size = gifts.size();
        for(int i = 0; i < k; i++){
            long long max = 0;
            int index = 0;
            for(int j = 0; j < size; j++){
                if(gifts[j]>=max){
                    max = gifts[j];
                    index = j;
                }
            }
            gifts[index] = sqrt(gifts[index]);
        }
        long long res = 0;
        for(int j = 0; j < size; j++){
            res += gifts[j];
        }
        return res;
    }
};
// @lc code=end

