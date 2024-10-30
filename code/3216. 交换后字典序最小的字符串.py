class Solution:
    def getSmallestString(self, s: str) -> str:
        lowest = s
        for i in range(len(s) - 1):
            num1 = int(s[i])
            num2 = int(s[i + 1])
            if num1 % 2 == num2 % 2 and num1 > num2:
                copy = list(s)
                temp = copy[i]
                copy[i] = copy[i + 1]
                copy[i + 1] = temp
                copy = ''.join(copy)
                lowest = min(lowest, copy)
                return lowest
        return s