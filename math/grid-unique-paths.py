from math import factorial
class Solution:
    def uniquePaths(self, A, B):
        return factorial(A+B-2) // (factorial(A-1) * factorial(B-1))

