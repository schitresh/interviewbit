class Solution:
    def repeatedNumber(self, A):
        A = list(A)
        for i in range(len(A)):
            j = abs(A[i])
            if A[j] < 0: return j
            A[j] = -1*A[j]

        return -1

