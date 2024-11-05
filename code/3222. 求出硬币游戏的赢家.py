class Solution:
    def losingPlayer(self, x: int, y: int) -> str:
        turn = min(x // 1, y // 4)
        if turn % 2 == 1:
            return 'Alice'
        else: 
            return 'Bob'