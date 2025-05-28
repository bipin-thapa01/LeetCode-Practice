class Solution:
    def reverse(self, x: int) -> int:
        isNegative = False
        if x < 0:
            isNegative = True
        s = str(abs(x))
        revS = s[::-1]
        x = int(revS)
        if isNegative:
            x = x*(-1)
        if x > 2 ** 31 - 1 or x < -2 ** 31:
            return 0
        return x