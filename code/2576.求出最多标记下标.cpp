/*
 * @FileName   : 2576.求出最多标记下标.cpp
 * @Author     : WangHengyu [wanghyuuuuu@163.com]
 * @CreateTime : 2024/09/12 19:18:13
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxNumOfMarkedIndices(vector<int> &nums)
{
    int res = 0;
    int n = nums.size(), m = n / 2;
    vector<int> flag(n, 0);
    sort(nums.begin(), nums.end());
    for (int i = 0, j = m; i < m && j < n; i++)
    {
        while (j < n && 2 * nums[i] > nums[j])
        {
            j++;
        }
        if (j < n)
        {
            res++;
            j++;
        }
    }
    return res * 2;
}

int main()
{
    vector<int> nums = {42, 83, 48, 10, 24, 55, 9, 100, 10, 17, 17, 99, 51, 32, 16, 98, 99, 31, 28, 68, 71, 14, 64, 29, 15, 40};
    cout << maxNumOfMarkedIndices(nums) << endl;
    return 0;
}