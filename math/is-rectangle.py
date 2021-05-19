class Solution:
    def solve(self, A, B, C, D):
        if A == B: B, C = C, B
        if A == D: C, D = D, C

        if A == C and B == D: return 1
        else: return 0

