class Solution:
    def isPower(self, A):
        for i in range(2, 33):
            root = round(A**(1/i))
            if root**i == A: return 1
        return 0

