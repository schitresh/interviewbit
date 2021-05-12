from math import gcd

class Solution:
    def cpFact(self, A, B):
        k = gcd(A, B)
        while k != 1:
            A //= k
            k = gcd(A, B)

        return A
