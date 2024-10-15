class Solution:
    def redFirst(self, red: int, blue: int) -> int:
        step = 1
        mark = 1
        res = 0
        while(1):
            if mark == 1 and red >= step:
                res += 1
                red -= step
                step += 1
                mark = 1 - mark
            elif mark == 0 and blue >= step:
                res += 1
                blue -= step
                step += 1
                mark = 1 - mark
            else:
                break
        return res

    def maxHeightOfTriangle(self, red: int, blue: int) -> int:
        return max(self.redFirst(red, blue), self.redFirst(blue, red))