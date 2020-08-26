class Solution:
    def solve(self, A):
        A.sort()
        for i in range(len(A)):
            if i < len(A)-1 and A[i+1] == A[i]: continue
            if A[i] == len(A) - 1 - i: return 1

        return -1

