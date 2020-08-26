class Solution:
    def wave(self, A):
        A.sort()
        for i in range(0, len(A)-1, 2):
            A[i+1], A[i] = A[i], A[i+1]

        return A
