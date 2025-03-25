from bisect import bisect_left
from typing import List

class Solution:
    def solveQueries(self, nums: List[int], queries: List[int]) -> List[int]:
        res = []
        index_map = {}
        for i, num in enumerate(nums):
            if num not in index_map:
                index_map[num] = []
            index_map[num].append(i)
        
        for p in index_map.values():
            # 前后各加一个哨兵
            i0 = p[0]
            p.insert(0, p[-1] - len(nums))
            p.append(i0 + len(nums))

        for q in queries:
            ans = 10000000
            target = nums[q]
            if len(index_map[target]) == 3:
                res.append(-1)
                continue
            pos = bisect_left(index_map[target], q)
            ans = min(q - index_map[target][pos - 1], index_map[target][pos + 1] - q, ans)
            res.append(ans)
        return res