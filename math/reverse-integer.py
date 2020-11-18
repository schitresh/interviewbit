class Solution:
    def reverse(self, A):
        sign = -1 if A < 0 else 1
        A = str(abs(A))
        A = int(A[::-1])
        return 0 if A > 2**31-1 else sign * A

