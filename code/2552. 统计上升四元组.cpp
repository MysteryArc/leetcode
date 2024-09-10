
/*
 * @FileName   : 2552. 统计上升四元组.cpp
 * @Author     : WangHengyu [wanghyuuuuu@163.com]
 * @CreateTime : 2024/09/10 16:02:20
 */

#include <iostream>
#include <vector>
using namespace std;

long long countQuadruplets(vector<int> &nums)
{
    int n = nums.size();
    long long res = 0;
    vector<int> lower(n + 1);
    for (int x = nums[0] + 1; x <= n; x++)
        lower[x]++;
    // 遍历j、k，遍历k时找到比j大的数l，遍历j时找到比k小的数i
    for (int j = 1; j < n - 2; j++)
    {
        int greater = 0;
        if (nums[n - 1] > nums[j])
            greater++;
        for (int k = n - 2; k > j; k--)
        {
            if (nums[j] > nums[k])
                res += lower[nums[k]] * greater;
            else
                greater++;
        }
        for (int x = nums[j] + 1; x <= n; x++)
            lower[x]++;
    }
    return res;
}

int main()
{
    vector<int> nums = {1, 3, 2, 4, 5};
    cout << countQuadruplets(nums) << endl;
    return 0;
}