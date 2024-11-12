class Solution:
    def countKConstraintSubstrings(self, s: str, k: int) -> int:
        num_min = min(s.count('1'), s.count('0'))
        n = len(s)
        if num_min < k:
            return n*(n + 1) // 2
        else:
            out = 0
            for w in range((k + 1) * 2, n + 1):
                i = 0
                j = i + w
                while j <= n:
                    ss = s[i:j]
                    num_min = min(ss.count('1'), ss.count('0'))
                    if num_min > k:
                        out += 1
                    i += 1
                    j += 1
            return n*(n + 1) // 2 - out