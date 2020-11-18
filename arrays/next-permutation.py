class Solution:
    def nextPermutation(self, A):
        i = len(A) - 1
        while i >= 0 and A[i-1] > A[i]: i -= 1

        j = len(A) - 1
        while j >= i and A[i-1] > A[j]: j -= 1
        A[i-1], A[j] = A[j], A[i-1]

        A[i:] = sorted(A[i:])
        return A

