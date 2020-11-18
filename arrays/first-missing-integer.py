class Solution:
    def firstMissingPositive(self, A):
        i = 0
        while i < len(A):
            if 0 < A[i] <= len(A):
                x = A[i]
                A[i] = A[x-1]
                A[x-1] = x
                if A[i] != x: continue
            i += 1

        for i in range(len(A)):
            if A[i] != i+1: return i+1

        return len(A)+1

