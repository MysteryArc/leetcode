/*
 * @lc app=leetcode.cn id=1823 lang=cpp
 *
 * [1823] 找出游戏的获胜者
 */
#include<iostream>
using namespace std;
// @lc code=start
class Solution {
public:
    int findTheWinner(int n, int k) {
        int a[501] = {0};
        int i = -1;
        int sumn = n;
        while(sumn > 1) {
            for (int l = 0; l < k; l++)
            {
                i = (i + 1) % n;
                while (a[i] != 0)
                    i = (i + 1) % n;
            }
            a[i] = 1;
            sumn--;
        }
        for (int j = 0; j < n; j++) {
            if(a[j]==0)
                return j+1;
        }
        return 0;
    }
};
// @lc code=end

