class Solution:
    def pow(self, x, n, d):
        if x == 0: return 0
        if n == 0: return 1
        if n == 1: return x % d

        half = self.pow(x, n//2, d)
        ans = (half * half) % d
        if n % 2 == 1: ans = (ans * x) % d

        return ans

