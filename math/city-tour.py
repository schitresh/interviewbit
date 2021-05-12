from math import factorial

class Solution:
    def solve(self, A, B):
        mod = 10 ** 9 + 7
        B.sort()
        first_gap = B[0] - 1
        last_gap = A - B[-1]

        ways = factorial(A-len(B))
        ways //= factorial(first_gap)
        ways //= factorial(last_gap)

        for i in range(1, len(B)):
            gap = B[i] - B[i-1] - 1
            if gap:
                ways *= 2 ** (gap - 1)
                ways //= factorial(gap)

        return ways % mod

