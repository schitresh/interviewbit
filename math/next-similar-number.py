class Solution:
    def solve(self, A):
        n = len(A) - 1
        k = -1
        for i in range(n, 0, -1):
            if A[i-1] < A[i]:
                k = i
                break

        if k == -1: return -1
        smallest = n

        for i in range(n, k - 1, -1):
            if A[i] > A[k-1]:
                smallest = i
                break

        A = A[:k-1] + A[smallest] + A[:smallest:-1] + A[k-1] + A[smallest-1:k-1:-1]
        return A
