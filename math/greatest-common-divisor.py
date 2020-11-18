class Solution:
    def gcd(self, A, B):
        if A > B: A, B = B, A
        if A == 0: return B
        return self.gcd(A, B % A)

