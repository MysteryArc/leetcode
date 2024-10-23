'''
@File       :  3185. 构成整天的下标对数目 II.py
@Time       :  2024/10/23 11:44:03
@Author     :  Wang Hengyu (wanghyuuuuu@163.com)
@Description:  
'''

# here put the import lib
from typing import List

class Solution:
    def countCompleteDayPairs(self, hours: List[int]) -> int:
        n = len(hours)
        res = 0
        dict = {}
        for i in range(n):
            res += dict.get((24 - hours[i]) % 24, 0)
            dict[hours[i] % 24] = dict.setdefault(hours[i] % 24, 0) + 1
        return res

if __name__ == '__main__':
    hours = [12,12,30,24,24]
    print(Solution.countCompleteDayPairs(Solution, hours=hours))